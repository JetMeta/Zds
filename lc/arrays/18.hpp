// 2017-09-11 18:05 it tooks too much time; need to optimize.
class Solution
{
public:
    bool exist(vector<vector<int>>& m, vector<int>& v)
    {
        for (auto t = m.crbegin(); t != m.crend(); ++t)
        {
            if (*t == v)
            {
                return true;
            }
        }

        return false;
    }

    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>> m;
        const size_t length = nums.size();

        if (length < 4)
        {
            return m;
        }

        sort(nums.begin(), nums.end());
        set<int> s;

        for (auto it0 = nums.begin(); it0 < nums.end() - 3; ++it0)
        {
            if (*it0 >((target / 4) + 1))
            {
                break;
            }

            for (auto it2 = it0 + 1; it2 < nums.end() - 2; ++it2)
            {
                if ((*it0 + *it2) >((target / 2) + 1))
                {
                    break;
                }

                for (auto it3 = it2 + 1; it3 < nums.end() - 1; ++it3)
                {
                    const int cur = target - (*it3 + *it2 + *it0);

                    auto it4 = lower_bound(it3 + 1, nums.end(), cur);
                    if (it4 != nums.end() && (*it4 == cur))
                    {
                        vector<int> v = { *it0,*it2,*it3,*it4 };

                        if (!exist(m, v))
                        {
                            m.push_back(v);
                        }
                    }
                }
            }
        }

        return m;
    }
};
