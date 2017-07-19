struct UpperBound
{
    UpperBound(const int val) : target(val) {}
    int target;

    bool operator()(const int& val)
    {
        return val > target;
    }
};

struct IsTarget
{
    IsTarget(const int val) : target(val) {}
    int target;
    bool operator()(const int& val)
    {
        return val == target;
    }
};

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> res;

        for (auto it = nums.begin(); it != nums.end(); ++it)
        {
            const int right = target - *it;

            auto it_next = it + 1;

            if (it_next < nums.end())
            {
                auto target_it = find_if(it_next, nums.end(), IsTarget(right));

                if (target_it!=nums.end())
                {
                    res.push_back(it - nums.begin());
                    res.push_back(target_it - nums.begin());

                    return res;
                }
            }
        }

        return res;
    }
};
