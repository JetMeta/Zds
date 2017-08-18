class Solution
{
public:
    int girdVal(const size_t i, const size_t j, vector<vector<int>>& grid, const size_t w, const size_t h)
    {
        if (i >= 0 && i < h && j >= 0 && j < w)
        {
            return grid[i][j];
        }

        return 0;
    }

    int calc(const size_t i, const size_t j, vector<vector<int>>& grid,const size_t w,const size_t h)
    {
        const int size_cnt =
            !girdVal(i - 1, j, grid, w, h) +
            !girdVal(i + 1, j, grid, w, h) +
            !girdVal(i, j - 1, grid, w, h) +
            !girdVal(i, j + 1, grid, w, h);
        return size_cnt;
    }

    int islandPerimeter(vector<vector<int>>& grid)
    {
        if (grid.size() == 0)
        {
            return 0;
        }

        if (grid[0].size() == 0)
        {
            return 0;
        }

        const size_t h = grid.size(), w = grid[0].size();

        int perimeter = 0;
        for (size_t i = 0; i < h; ++i)
        {
            for (size_t j = 0; j < w; ++j)
            {
                if (grid[i][j])
                {
                    perimeter += calc(i, j, grid, w, h);
                }
            }
        }

        return perimeter;
    }
};
