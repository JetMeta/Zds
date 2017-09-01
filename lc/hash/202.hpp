class Solution
{
public:
    int getSquareSum(int n)
    {
        int res = 0;
        while (n > 0)
        {
            const int digit = n % 10;
            res += digit*digit;
            n /= 10;
        }

        return res;
    }

    bool isHappy(int n)
    {
        if (n == 1)
        {
            return true;
        }

        set<int> s;
        s.insert(n);

        bool done = false;
        bool res = false;
        while (!done)
        {
            n = getSquareSum(n);

            if (n == 1)
            {
                done = true;
                res = true;
            }

            if (s.find(n) != s.end())
            {
                done = true;
                res = false;
            }

            s.insert(n);
        }

        return res;
    }
};
