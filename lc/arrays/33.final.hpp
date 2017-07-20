class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        if (nums.empty())
        {
            return -1;
        }

        int n = (int)nums.size();
        int l(0), h(n - 1);
        int m(0);

        while (l < h)
        {
            m = (l + h) >> 1;
            if (nums[m] > nums[h])
            {
                l = m + 1;
            }
            else
            {
                h = m;
            }
        }

        int r = l;
        l = 0;
        h = n - 1;

        while (l <= h)
        {
            m = (l + h) / 2;
            int real_m = (m + r) % n;
            if (nums[real_m] == target)return real_m;
            if (nums[real_m] < target)l = m + 1;
            else h = m - 1;
        }

        return -1;
    }
};
