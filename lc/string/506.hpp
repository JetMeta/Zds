class Solution
{
public:
    vector<string> findRelativeRanks(vector<int>& nums)
    {
        string medal[] = { "Gold Medal","Silver Medal","Bronze Medal" };
        const size_t length = nums.size();
        vector<int> t = nums;
        sort(t.begin(), t.end());
        vector<string> res(length);

        for (size_t i = 0; i < length; ++i)
        {
            auto it = lower_bound(t.begin(), t.end(),nums[i]);
            size_t offset = t.end() -1 - it ;

            if (offset < 3)
            {
                res[i] = medal[offset];
            }
            else
            {
                res[i] = to_string(offset+1);
            }
        }

        return res;
    }
};
