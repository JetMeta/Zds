class Solution
{
public:
    void reverseWord(string &s, int start, int end)
    {
        --end;
        while (start < end)
        {
            swap(s[start++], s[end--]);
        }
    }

    string reverseStr(string s, int k)
    {
        if (k < 2)
        {
            return s;
        }

        const size_t len = s.length();

        size_t left = len;
        size_t idx = 0;
        size_t step = 2 * k;

        while (left >= step)
        {
            reverseWord(s, idx, idx + k);
            left -= step;
            idx += step;
        }

        if (left >= k)
        {
            reverseWord(s,idx,idx+k);
        }
        else
        {
            if (left > 0)
            {
                reverseWord(s, idx, len);
            }
        }

        return s;
    }
};
