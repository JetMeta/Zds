class Solution
{
public:
    string reverse(string& str)
    {
        const size_t length = str.length();
        const size_t half = length / 2;

        for (size_t i = 0; i < half; i++)
        {
            swap(str[i], str[length - 1 - i]);
        }

        return str;
    }
    string convertToTitle(int n)
    {
        string s;

        while (n)
        {
            const int digit = n % 26;

            if (digit)
            {
                const char c = 'A' + digit - 1;
                n /= 26;
                s.push_back(c);
            }
            else
            {
                const char c = 'Z';
                n = (n - 26)/26;
                s.push_back(c);
            }
        }

        reverse(s);

        return s;
    }
};