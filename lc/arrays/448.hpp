// todo : optimize
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        vector<int> v(nums.size());

        for (size_t i = 0; i < nums.size(); ++i)
        {
            v[nums[i]-1] = 1;
        }

        vector<int> res;
        res.reserve(nums.size() / 2);
        for (size_t i = 0 ; i < v.size(); ++i)
        {
            if (v[i] == 0)
            {
                res.push_back(i+1);
            }
        }
        return res;
    }
};
