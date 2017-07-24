class Solution
{
public:
    int maximumProduct(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        size_t len = nums.size();

        return max(nums[len - 1] * nums[len - 2] * nums[len - 3], nums[0] * nums[1] * nums[len - 1]);
    }
};

class Solution
{
public:
    int maximumProduct(vector<int>& nums)
    {
        vector<int> v(5);
        v[0] = v[1] = numeric_limits<int>::max();
        v[2] = v[3] = v[4] = numeric_limits<int>::min();

        for (size_t i = 0; i < nums.size(); i++)
        {
            int j = 1;
            while (nums[i] < v[j] )
            {
                --j;

                if (j < 0)
                {
                    break;
                }
            }

            if (j == 0)
            {
                v[j + 1] = nums[i];
            }
            else
            {
                if (j == -1)
                {
                    v[1] = v[0];
                    v[0] = nums[i];
                }
            }

            for (size_t k = 4; k > 1; --k)
            {
                if (v[k] < nums[i])
                {
                    for (size_t l = 2; l < k; ++l)
                    {
                        v[l] = v[l + 1];
                    }

                    v[k] = nums[i];
                    break;
                }
            }
        }

        const size_t len = 5;
        return max(v[len - 1] * v[len - 2] * v[len - 3], v[0] * v[1] * v[len - 1]);
    }
};
