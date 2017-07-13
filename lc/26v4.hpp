class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int n = 0;

        for (auto it = nums.begin(); it != nums.end();)
        {
            nums[n++] = *it;

            while (it != nums.end() && *it == nums[n - 1])
            {
                ++it;
            }
        }

        return n;
    }
};
