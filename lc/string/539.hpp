class Solution
{
public:
    int strToTime(const string& str)
    {
        string::size_type sz;

        const int nh = stoi(str, &sz);
        const int nm = stoi(&str[sz + 1], &sz);

        return nh * 60 + nm;
    }

    int findMinDifference(vector<string>& timePoints)
    {
        size_t length = timePoints.size();
        const int day = 24 * 60;
        int res = day;
        vector<int> v(length);

        for (size_t i = 0; i < length; i++)
        {
            const int cur = strToTime(timePoints[i]);

            v[i] = cur;
        }

        for (size_t i = 0; i < length; i++)
        {
            for (size_t j = i + 1; j < length; ++j)
            {
                int r1 = 0;
                int r2 = 0;
                if (v[i] == v[j])
                {
                    return 0;
                }
                else
                {
                    if (v[i] > v[j])
                    {
                        r1 = v[i] - v[j];
                        r2 = v[j] + day - v[i];

                        res = min(res, min(r1, r2));
                    }
                    else
                    {
                        r1 = v[j] - v[i];
                        r2 = v[i] + day - v[j];

                        res = min(res, min(r1, r2));
                    }
                }
            }
        }

        return res;
    }
};