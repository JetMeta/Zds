class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        map<char, int> m;

        for (auto it = magazine.begin(); it!=magazine.end(); ++it)
        {
            ++m[*it];
        }

        for (auto it = ransomNote.begin(); it!=ransomNote.end(); ++it)
        {
            auto ele = m.find(*it);

            if (ele != m.end())
            {
                if (m[*it] != 0)
                {
                    --m[*it];
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};
