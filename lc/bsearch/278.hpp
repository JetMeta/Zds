class Solution
{
public:
    int firstBadVersion(int n)
    {
        int l = 1, r = n, m;

        while (l <= r)
        {
            if (l == r)
            {
                if (isBadVersion(l))
                {
                    return l;
                }
            }

            m = l + (r - l) / 2;

            if (isBadVersion(m))
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        return l;
    }
};
