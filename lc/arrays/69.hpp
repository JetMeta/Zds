class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 0;
        int min_diff = std::numeric_limits<int>::max();
        const int max_root = 46341;

        int r = min(x, max_root);
        int m = (l + r) / 2;
        int last = 0;

        while (l <= r)
        {
            m = (l + r) / 2;

            const int square = m*m;

            if (square == x)
            {
                return m;
            }

            const int diff = x - square;
            if (diff > min_diff)
            {
                return last;
            }

            if (diff >= 0 && diff < min_diff)
            {
                last = m;
                min_diff = diff;
            }

            if (square < x)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }

        return last;
    }
};


class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0) return 0;
        int lo = 1, hi = INT_MAX;
        while (true)
        {
            int mid = lo + (hi - lo) / 2;
            if (mid > x / mid)
            {
                hi = mid - 1;
            }
            else
            {
                if ((mid + 1) > x / (mid + 1))
                    return mid;
                lo = mid + 1;
            }
        }
    }
};
