class Solution
{
public:
    bool containsDuplicate(vector<int>& nums)
    {
        const size_t length = nums.size();

        if (length < 2)
        {
            return false;
        }

        sort(nums.begin(), nums.end());

        for(size_t  i = 0 ; i < length-1; ++i)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }

        return false;
    }
};
