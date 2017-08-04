// https://studiofreya.com/3d-math-and-physics/little-more-advanced-collision-detection-spheres/
bool testMovingSphereSphere(Scenenode *A, Scenenode *B, double &t)
{
    Planet *pa = (Planet *) A;
    Planet *pb = (Planet *) B;

    Vector3D<double> s = pa->pos - pb->pos; // vector between the centers of each sphere
    Vector3D<double> v = pa->vel - pb->vel; // relative velocity between spheres
    double r = pa->radius + pb->radius;

    double c = s.dot(s) - r*r; // if negative, they overlap
    if (c < 0.0) // if true, they already overlap
    {
        t = .0;
        return true;
    }

    float a = v.dot(v);

    float b = v.dot(s);
    if (b >= 0.0)
        return false; // does not move towards each other

    float d = b*b - a*c;
    if (d < 0.0)
        return false; // no real roots ... no collision

    t = (-b - sqrt(d)) / a;

    return true;
}
