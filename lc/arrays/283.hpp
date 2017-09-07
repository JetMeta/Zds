class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        const size_t length = nums.size();
        size_t last_non_zero = 0;

        for (size_t i = 0; i < length; i++)
        {
            if (nums[i] != 0)
            {
                nums[last_non_zero] = nums[i];
                ++last_non_zero;
            }
        }

        for (size_t i = last_non_zero; i < length; i++)
        {
            nums[i] = 0;
        }
    }
};
