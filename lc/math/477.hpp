// compare every two different nums will cost too much time. reference.
class Solution
{
public:
    int totalHammingDistance(vector<int> nums)
    {
        int bitCount = 0;
        int total = 0, n = nums.size();
        for (int j = 0; j < 32; ++j)
        {
            bitCount = 0;
            for (int i = 0; i < n; ++i)
                bitCount += (nums[i] >> j) & 1;

            total += bitCount*(n - bitCount);
        }

        return total;
    }
};
