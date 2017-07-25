class Solution
{
public:
    bool compare(const string& str1, const string& str2)
    {
        const int len = str2.length();

        if (strncmp(str1.c_str(), str2.c_str(), len) == 0)
        {
            return true;
        }

        return false;
    }

    int strStr(string haystack, string needle)
    {
        const int part_len = needle.size();
        const int len = static_cast<int>(haystack.size());

        if (part_len == 0 && len == 0)
        {
            return 0;
        }

        for (int i = 0; i < len; ++i)
        {
            if (len - i < part_len)
            {
                return -1;
            }

            if (compare(&haystack[i], needle))
            {
                return i;
            }
        }

        return -1;
    }
};
