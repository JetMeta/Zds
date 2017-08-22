class Solution
{
public:
    int get_val(vector<vector<int>>& M, const int w, const int h, const int i, const int j)
    {
        if (i >= 0 && i < h && j >= 0 && j < w)
        {
            return M[i][j];
        }

        return -1;
    }

    vector<vector<int>> imageSmoother(vector<vector<int>>& M)
    {
        vector<vector<int>> v = M;
        const int w = M[0].size();
        const int h = M.size();
        vector<vector<int>> res(h);

        for (int i = 0; i < h; ++i)
        {
            res[i].reserve(w);

            for (int j = 0; j < w; ++j)
            {
                int cnt = 0;
                int sum = 0;

                for (int s = i-1; s < i+2; ++s)
                {
                    for (int t = j - 1; t < j + 2; ++t)
                    {
                        {
                            const int val = get_val(M, w, h, s, t);

                            if (val != -1)
                            {
                                ++cnt;
                                sum += val;
                            }
                        }
                    }
                }

                res[i].push_back(sum/ cnt);
            }
        }

        return res;
    }
};
