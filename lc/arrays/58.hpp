class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        const int len = s.length();

        int i = len - 1;
        for ( ; i >-1 && s[i] == ' '; --i)
        {
        }

        if (i > -1)
        {
            const int start = i;

            for (; (i >-1) && (s[i] != ' '); --i)
            {
            }

            return start - i;
        }

        return 0;
    }
};

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int length = 0;

        for (int i = (int)s.size() - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                if (length)
                {
                    break;
                }
                else
                {
                    continue;
                }
            }

            length++;
        }

        return length;
    }
};
