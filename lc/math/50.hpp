class Solution
{
public:
    double f(double x, unsigned int n)
    {
        double res = 1.0f;
        while (n)
        {
            if (n & 0x01)
            {
                res *= x;
            }

            n = n >> 1;
            x *= x;
        }

        return res;
    }
    double myPow(double x, int n)
    {
        if (n == 0)
        {
            return 1.0f;
        }

        double res = 1.0f;
        if (n > 0)
        {
            res = f(x, n);
        }
        else
        {
            res = f(x, abs(n));

            res = 1.0 / res;
        }

        return res;
    }
};
