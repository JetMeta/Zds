class Solution
{
public:
    int f(vector<vector<int>>& grid,size_t i,size_t j, vector<vector<int>>& r)
    {
        if(i == 0 && j == 0)
        {
            return grid[i][j];
        }

        if(i == 0)
        {
            int s;
            if (r[i][j - 1] != (numeric_limits<int>::min)())
            {
                s = r[i][j - 1];
            }
            else
            {
                s = f(grid, i, j - 1,r);
                r[i][j - 1] = s;
            }

            return s + grid[i][j];
        }

        if(j == 0)
        {
            int s;
            if (r[i - 1][j] != (numeric_limits<int>::min)())
            {
                s = r[i -1][j];
            }
            else
            {
                s = f(grid, i - 1, j, r);
                r[i - 1][j] = s;
            }

            return  s + grid[i][j];
        }

        int s, t;

        if (r[i - 1][j] != (numeric_limits<int>::min)())
        {
            t = r[i - 1][j];
        }
        else
        {
            t = f(grid, i - 1, j,r);
            r[i - 1][j] = t;
        }

        if (r[i][j - 1] != (numeric_limits<int>::min)())
        {
            s = r[i][j - 1];
        }
        else
        {
            s = f(grid, i, j -1 , r);
            r[i][j-1] = s;
        }

        return min(s + grid[i][j],t + grid[i][j]);
    }

    int minPathSum(vector<vector<int>>& grid)
    {
        const size_t x = grid.size();
        const size_t y = grid[0].size();

        vector<vector<int>> res(x);

        for(size_t i = 0 ; i < x ; ++i)
        {
            res[i].resize(y,(numeric_limits<int>::min)());
        }

        return f(grid,x-1,y-1,res);
    }
};