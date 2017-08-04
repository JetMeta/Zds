class Solution
{
public:
    void reverseRange(string& s, int l, int r)
    {
        const int len = r - l;

        if (len <= 1)
        {
            return;
        }

        --r;
        while (l < r)
        {
            swap(s[l], s[r]);
            ++l;
            --r;
        }
    }

    string reverseWords(string s)
    {
        const size_t len = s.length();

        int l = 0, r = 0;
        for (size_t i = 0; i < len;)
        {
            while (isspace(s[i]) && i < len)
            {
                ++i;
            }

            if (i == len)
            {
                return s;
            }

            l = i;

            while (!isspace(s[i]) && i < len)
            {
                ++i;
            }
            r = i;

            reverseRange(s, l, r);
        }

        return s;
    }
};

class Solution
{
public:
    void reverseWord(string &s, int start, int end)
    {
        while (start < end)
        {
            swap(s[start++], s[end--]);
        }
    }

    string reverseWords(string s)
    {
        const int len = s.length();
        int start = 0, end = 0;
        while ((end = s.find(' ', start)) != -1)
        {
            reverseWord(s, start, end - 1);
            start = end + 1;
        }

        reverseWord(s, start, len - 1);

        return s;
    }
};
