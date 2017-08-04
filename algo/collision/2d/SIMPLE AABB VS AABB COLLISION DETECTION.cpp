SIMPLE AABB VS AABB COLLISION DETECTION
https://studiofreya.com/3d-math-and-physics/simple-sphere-sphere-collision-detection-and-collision-response/
What is AABB? An AABB is an axis aligned bounding box. AABB vs AABB is a box vs box or bounding box collision detection. It¡¯s mainly used in broadphase physics detection.

Assume that a center point and halfwidth extents or radius are the basic properties of an AABB (there are several methods to represent AABB structure).

This is a C++ code example for AABB structure:

struct AABB
{
    AABB() : c(), r() {}

    AABB(const Point & center, const Point & halfwidths)
        : c(center)
        , r(halfwidths)
    {}

    Point c;        // center point
    Point r;        // halfwidths
};

The bounding box (AABB) structure uses a Point class structure. Here is a C++ Point class example implementation:

struct Point
{
    Point() {}
    Point( double x, double y, double z )
        : x(x)
        , y(y)
        , z(z)
    {}
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    double w = 0.0;

    const double operator[](const int idx) const
    {
        if (idx == 0) return x;
        if (idx == 1) return y;
        if (idx == 2) return z;
        if (idx == 3) return w;

        assert(0);
    }
};

Now we can write a bounding box collision detection example in C++. We use a test to check if there is an overlap between the bounding boxes.

double Abs(double a)
{
    return std::fabs(a);
}

bool testAABBAABB(const AABB &a, const AABB &b)
{
    if ( Abs(a.c[0] - b.c[0]) > (a.r[0] + b.r[0]) ) return false;
    if ( Abs(a.c[1] - b.c[1]) > (a.r[1] + b.r[1]) ) return false;
    if ( Abs(a.c[2] - b.c[2]) > (a.r[2] + b.r[2]) ) return false;

    // We have an overlap
    return true;
};

Update:
There is a discussion in the comments about the validity of this test. There was a couple of issues raised.

Only diagonally offset AABBs will pass the test

There was a typo in the test making it not compilable, and it could have been misleading. The last parenthesis in the if-sentences where missing. This could have led one to believe all axes must pass the test. That is not true. If one axis is not intersecting, both AABBs aren¡¯t intersecting at all. All axes must overlap to have an actual overlap.

Must account for floating point precision errors

There is no need to take floating point precision errors into account when you¡¯re not comparing with equals (operator ==). When you¡¯re using larger-than or lesser-than operators, you¡¯ll only shift the error by whatever value you choose for you epsilon.

Read also: Sphere vs AABB collision detection
In corner cases, where axis aligned bounding boxes are aligned next to each other, you as a programmer have to decide the desired outcome. Where you¡¯re simulating physics with moving bounding boxes, those errors are negligible. The only consequence is to have a positive test in ¡°this frame¡± or the ¡°next frame¡±.

I¡¯ve also made some tests, based on the three versions (1 in the article, 2 in the comments). The source code is available at https://github.com/Studiofreya/code-samples/tree/master/physics.

The results from the test are:
AABB 1: AABB center(0 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(0 0 0) halfs(0.5 0.5 0.5)
Post result 1
Anon result 1
CJM result 1
AABB 1: AABB center(0 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(1 0 0) halfs(0.5 0.5 0.5)
Post result 1
Anon result 1
CJM result 1
AABB 1: AABB center(0 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(1.5 0 0) halfs(0.5 0.5 0.5)
Post result 0
Anon result 1
CJM result 0
AABB 1: AABB center(0 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(15 0 0) halfs(0.5 0.5 0.5)
Post result 0
Anon result 1
CJM result 0
AABB 1: AABB center(1 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(1 0 0) halfs(0.5 0.5 0.5)
Post result 1
Anon result 1
CJM result 1
AABB 1: AABB center(1 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(1.5 0 0) halfs(0.5 0.5 0.5)
Post result 1
Anon result 1
CJM result 1
AABB 1: AABB center(1 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(15 0 0) halfs(0.5 0.5 0.5)
Post result 0
Anon result 1
CJM result 0
AABB 1: AABB center(1.5 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(1.5 0 0) halfs(0.5 0.5 0.5)
Post result 1
Anon result 1
CJM result 1
AABB 1: AABB center(1.5 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(15 0 0) halfs(0.5 0.5 0.5)
Post result 0
Anon result 1
CJM result 0
AABB 1: AABB center(0 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(0 1.5 0) halfs(0.5 0.5 0.5)
Post result 0
Anon result 1
CJM result 0
AABB 1: AABB center(0 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(0 2.5 0) halfs(0.5 0.5 0.5)
Post result 0
Anon result 1
CJM result 0
AABB 1: AABB center(0 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(0 3.5 0) halfs(0.5 0.5 0.5)
Post result 0
Anon result 1
CJM result 0
AABB 1: AABB center(0 0 0) halfs(0.5 0.5 0.5)
AABB 2: AABB center(15 15 15) halfs(0.5 0.5 0.5)
Post result 0
Anon result 0
CJM result 0
The post and CJ have identical results. Do not use Anons test.

Bonus
Here is a SIMD-optimizied test, removing the conditional branches.

bool testAABBAABB_SIMD(const AABB &a, const AABB &b)
{
    // SIMD optimized AABB-AABB test
    // Optimized by removing conditional branches
    bool x = Abs(a.c[0] - b.c[0]) <= (a.r[0] + b.r[0]);
    bool y = Abs(a.c[1] - b.c[1]) <= (a.r[1] + b.r[1]);
    bool z = Abs(a.c[2] - b.c[2]) <= (a.r[2] + b.r[2]);

    return x && y && z;
}
