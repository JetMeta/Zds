class Solution
{
public:
    int f(int r, int c, vector<vector<int>>& v, vector<pair<bool, int>>& sum)
    {
        if (r == 0 && c == 0)
        {
            return v[r][c];
        }

        if (sum[(r + 1)*r / 2 + c].first)
        {
            return sum[(r + 1)*r / 2 + c].second;
        }

        if (c == 0 )
        {
            const int res = f(r - 1, c, v, sum) + v[r][c];
            sum[(r + 1)*r / 2 + c].first = true;
            sum[(r + 1)*r / 2 + c].second = res;

            return res;
        }

        if (c == (v[r].size() - 1))
        {
            const int res = f(r - 1, c - 1, v, sum) + v[r][c];
            sum[(r + 1)*r / 2 + c].first = true;
            sum[(r + 1)*r / 2 + c].second = res;

            return res;
        }

        const int res = min(f(r - 1, c - 1, v, sum),f(r-1,c,v,sum)) + v[r][c];
        sum[(r + 1)*r / 2 + c].first = true;
        sum[(r + 1)*r / 2 + c].second = res;

        return res;
    }

    int minSum(vector<vector<int>>& v)
    {
        const size_t r = v.size();
        vector<pair<bool,int>> sum((r + 1)*r / 2);

        int min_sum = std::numeric_limits<int>::max();
        size_t last_row_len = v[v.size() - 1].size();

        for (size_t j = 0; j < last_row_len; ++j)
        {
            int res = f(v.size()-1, j,v,sum);
            if (res < min_sum)
            {
                min_sum = res;
            }
        }

        return min_sum;
    }
};
