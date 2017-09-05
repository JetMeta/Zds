class Solution
{
public:
    int maxSubArray(vector<int>& nums)
    {
        int finalMax = nums[0],curMax = nums[0];

        for (int i = 1; i < nums.size(); ++i)
        {
            curMax = max(nums[i], nums[i] + curMax);
            finalMax = max(finalMax, curMax);
        }

        return finalMax;
    }
};
