class Solution
{
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(), nums.end());

        const size_t len = nums.size();
        int sum = std::numeric_limits<int>::max();
        int ans = 0;
        for (size_t i = 0; i < len - 2; ++i)
        {
            size_t l = i + 1;
            size_t r = len - 1;

            while (l < r)
            {
                const int ans_v = nums[i] + nums[l] + nums[r];
                const int left = abs(ans_v - target);
                if (left == 0)
                {
                    return target;
                }

                if (nums[i] + nums[l] + nums[r] < target)
                {
                    ++l;
                }
                else
                {
                    --r;
                }

                if (left < sum)
                {
                    sum = left;
                    ans = ans_v;
                }
            }
        }

        return ans;
    }
};
