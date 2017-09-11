class Solution
{
public:
    int findContentChildren(vector<int>& g, vector<int>& s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        auto it = s.begin();
        int cnt = 0;
        for (auto& e:g)
        {
            it = lower_bound(it, s.end(), e);

            if (it != s.end())
            {
                ++cnt;
                it += 1;
            }
            else
            {
                return cnt;
            }
        }

        return cnt;
    }
};
