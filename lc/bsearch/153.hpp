class Solution
{
public:
    int findMin(vector<int>& nums, const int l, const int r)
    {
        if (l >= r)
        {
            return nums[r];
        }

        if (nums[l] <= nums[r])
        {
            return nums[l];
        }
        else
        {
            int m = (l + r) >> 1;

            if (nums[m] >= nums[l])
            {
                return findMin(nums, m + 1, r);
            }
            else
            {
                return findMin(nums, l, m);
            }
        }
    }

    int findMin(vector<int>& nums)
    {
        return findMin(nums, 0, nums.size() - 1);
    }
};
