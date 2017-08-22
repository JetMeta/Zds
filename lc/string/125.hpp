class Solution
{
public:
    bool isPalindrome(string s)
    {
        const int len = static_cast<int>(s.length());

        if (len == 0)
        {
            return true;
        }

        int l = 0;
        int r = len - 1;

        while (l < r)
        {
            while (l < len && !isalnum(s[l]))
            {
                ++l;
            }

            while (r >= 0 && !isalnum(s[r]))
            {
                --r;
            }

            if (l < r && l < len && r >= 0)
            {
                if (toupper(s[l]) != toupper(s[r]))
                {
                    return false;
                }

                ++l;
                --r;
            }
        }

        return true;
    }
};
