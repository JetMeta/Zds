class Solution
{
public:
    bool checkRecord(string s)
    {
        vector<int> v(2);

        for (const auto& c : s)
        {
            switch(c)
            {
            case 'A':
                ++v[0];

                if (v[0] > 1)
                {
                    return false;
                }
                v[1] = 0;

                break;
            case 'L':
                ++v[1];

                if (v[1] > 2)
                {
                    return false;
                }

                break;
            case 'P':
                v[1] = 0;
                break;
            }
        }

        return true;
    }
};
