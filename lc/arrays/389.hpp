class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        const int cnt = 'z' - 'a' + 1;
        vector<int> v1(cnt,0);
        vector<int> v2(cnt,0);

        for (auto it = s.begin(); it!=s.end(); ++it)
        {
            ++v1[*it - 'a'];
        }

        for (auto it = t.begin(); it != t.end(); ++it)
        {
            ++v2[*it - 'a'];
        }

        for (int idx = 0 ; idx < cnt; ++idx)
        {
            if (v1[idx] != v2[idx])
            {
                return idx + 'a';
            }
        }
    }
};
