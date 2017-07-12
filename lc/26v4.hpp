//26ms，写了四个版本，时间45ms->26ms。比最初的要简洁。还有25%左右的人实现时间更短，不知道如何实现的。

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
