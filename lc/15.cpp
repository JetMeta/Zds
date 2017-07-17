// 2017-07-17 852 ms. ok, but near tle. :( TLE

struct comp_lower_bound
{
    bool operator() (const vector<int>& l, const vector<int>& r)
    {
        if (l[0] == r[0] && l[1] == r[1])
        {
            return l[2] < r[2];
        }
        else
        {
            if (l[0] == r[0])
            {
                return l[1] < r[1];
            }
            else
            {
                return l[0] < r[0];
            }
        }
    }
};

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;

        if(nums.size() < 3)
        {
            return v;
        }

        for (auto it1 = nums.begin(); it1 < nums.end()-2; ++it1)
        {
            if (*it1 > 0)
            {
                break;
            }

            if (*it1 + *(it1 + 1) > 0)
            {
                break;
            }

            for (auto it2 = it1 + 1; it2 < nums.end() - 1; ++it2)
            {
                if (*it1 + *it2 > 0)
                {
                    break;
                }

                if (*it1 + *it2 + *(it2 + 1) > 0)
                {
                    break;
                }

                const int dst = 0 - (*it1 + *it2);

                auto it3 = lower_bound(it2 + 1, nums.end(), dst);

                if (it3 != nums.end() && *it3 == dst)
                {
                    vector<int> v_item = { *it1,*it2,*it3 };
                    sort(v_item.begin(), v_item.end());

                    auto it4 = lower_bound(v.begin(), v.end(), v_item, comp_lower_bound());
                    if (it4 != v.end())
                    {
                        if ((*it4)[0] == v_item[0] && (*it4)[1] == v_item[1] && (*it4)[2] == v_item[2])
                        {

                        }
                        else
                        {
                            v.insert(it4,1,v_item);
                        }
                    }
                    else
                    {
                        v.push_back(v_item);
                    }
                }
            }
        }

        return v;
    }
};
