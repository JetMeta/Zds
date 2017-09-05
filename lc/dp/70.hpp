class Solution
{
private:
    unordered_map<int, int> m;
public:
    int f(int n)
    {
        if (n == 0)
        {
            return 0;
        }

        if (n == 1)
        {
            return 1;
        }

        if (n == 2)
        {
            return 2;
        }

        if (m.find(n) != m.end())
        {
            return m[n];
        }
        else
        {
            m[n] = f(n - 1) + f(n - 2);
        }

        return m[n];
    }

    int climbStairs(int n)
    {
        return f(n);
    }
};
