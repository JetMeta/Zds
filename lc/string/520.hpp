class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        size_t length = word.length();

        if (length > 1)
        {
            if (isupper(word[0]))
            {
                if (isupper(word[1]))
                {
                    for (size_t i = 2; i < length; i++)
                    {
                        if (islower(word[i]))
                        {
                            return false;
                        }
                    }

                    return true;
                }
                else
                {
                    if (islower(word[1]))
                    {
                        for (size_t i = 2; i < length; i++)
                        {
                            if (isupper(word[i]))
                            {
                                return false;
                            }
                        }

                        return true;
                    }
                }
            }
            else
            {
                for (size_t i = 1; i < length; i++)
                {
                    if (isupper(word[i]))
                    {
                        return false;
                    }
                }

                return true;
            }
        }

        return true;
    }
};