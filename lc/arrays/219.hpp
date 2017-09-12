class Solution
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {

        if (nums.empty())
        {
            return false;
        }

        const size_t length = nums.size();

        vector<int> t = nums;
        sort(t.begin(), t.end());

        for (size_t i = 0; i < length - 1; i++)
        {
            if (t[i] == t[i + 1])
            {
                auto it1 = find(nums.begin(), nums.end(),t[i]);

                while (it1 != nums.end())
                {
                    auto it2 = find(it1 + 1, nums.end(), t[i]);

                    if (it2 != nums.end())
                    {
                        size_t diff = it2 - it1;

                        if (diff <= k)
                        {
                            return true;
                        }
                    }

                    it1 = it2;
                }
            }

            int k = 1;
            while (i + 1 + k < length - 1 && t[i] == t[i + 1 + k])
            {
                ++i;
            }
        }

        return false;
    }
};
