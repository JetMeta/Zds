class NumArray
{
private:
    vector<int> r;

public:
    NumArray(vector<int> nums) :r(nums.size() + 1, 0)
    {
        const size_t length = nums.size();

        if (length)
        {
            for (size_t i = 0; i < length; ++i)
            {
                r[i+1] = r[i] + nums[i];
            }
        }
    }

    int sumRange(int i, int j)
    {
        return r[j+1] - r[i];
    }
};
