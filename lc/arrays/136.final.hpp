class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        map<int, int> m;

        for (auto it = nums.begin(); it != nums.end(); ++it)
        {
            ++m[*it];
        }

        for (auto it = m.cbegin(); it!=m.end(); ++it)
        {
            if (it->second != 2)
            {
                return it->first;
            }
        }
    }
};

// final
class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        int res(0);

        for (auto it = nums.cbegin(); it != nums.cend(); ++it)
        {
            res ^= *it;
        }

        return res;
    }
};
