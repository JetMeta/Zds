class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c)
    {
        int h = nums.size();
        int w = nums[0].size();

        if (w*h >= r*c)
        {
            int idx = 0;

            vector<vector<int>> v(r);
            for (size_t i = 0; i < r; i++)
            {
                v[i].resize(c);

                for (size_t j = 0; j < c; j++)
                {
                    v[i][j] = nums[idx / w][idx%w];

                    ++idx;
                }
            }

            return v;
        }

        return nums;
    }
};
