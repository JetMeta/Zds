class Solution
{
public:
    string reverseString(string s)
    {
        const size_t len = s.size();
        const size_t half_len = len / 2;

        for (int idx = 0 ; idx < half_len; ++idx)
        {
            swap(s[idx], s[len - 1 - idx]);
        }

        return s;
    }
};
