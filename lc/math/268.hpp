class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        const size_t len = nums.size();
        const long long res = len*(len + 1) / 2;
        long long sum = 0;

        for (size_t i = 0; i < len; ++i)
        {
            sum += nums[i];
        }

        return res - sum;
    }
};
