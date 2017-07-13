class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        int idx = 0;

        sort(nums.begin(), nums.end());

        for (auto it = nums.begin(); it != nums.end(); )
        {
            while ((it != nums.end()) && (*it == val))
            {
                ++it;
            }

            if (it != nums.end())
            {
                nums[idx++] = *it;
                ++it;
            }
            else
            {
                break;
            }
        }

        return idx;
    }
};