// todo : performance, too many space
class Solution
{
public:
    void rotate(vector<vector<int>>& matrix)
    {
        size_t n = matrix.size();

        auto k = matrix;

        for (size_t i = 0; i < n; ++i)
        {
            for (size_t j = 0; j < n; j++)
            {
                k[j][n - i - 1] = matrix[i][j];
            }
        }

        matrix = k;
    }
};
