class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }

        if (s.empty())
        {
            return true;
        }

        const size_t letters = 'z' + 1 - 'a';
        vector<int> v(letters, 0);

        const size_t len = s.size();
        for (size_t i = 0; i < len; ++i)
        {
            ++v[s[i] - 'a'];
            --v[t[i] - 'a'];
        }

        for (auto i : v)
        {
            if (i)
            {
                return false;
            }
        }

        return true;
    }
};
