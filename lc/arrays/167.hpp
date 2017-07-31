class Solution
{
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        for (auto it = numbers.cbegin(); it!=numbers.cend(); ++it)
        {
            const int left = target - *it;

            auto cur = lower_bound(it+1, numbers.cend(), left);
            if (cur  != numbers.cend() && *cur == left)
            {
                vector<int> v = { static_cast<int>(it - numbers.cbegin() + 1),static_cast<int>(cur - numbers.cbegin() + 1 )};
                return v;
            }
        }
    }
};

// final
class Solution
{
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int small = 0;
        int big = numbers.size() - 1;
        while (numbers[small] + numbers[big] != target)
        {
            if (numbers[small] + numbers[big]<target)
            {
                small++;
            }
            else
            {
                big--;
            }
        }
        return vector<int>({ small + 1,big + 1 });

    }
};
