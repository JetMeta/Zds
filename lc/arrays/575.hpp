class Solution
{
public:
    int distributeCandies(vector<int>& candies)
    {
        int cnt = 0;
		bitset<200001> b;
        const int max_candies = candies.size() / 2;

        for (auto it = candies.cbegin(); it != candies.cend(); ++it)
        {
            if (!b[*it + 100000])
            {
                b[*it + 100000] = true;
                ++cnt;
            }

            if (cnt >= max_candies)
            {
                return max_candies;
            }
        }

        return cnt;
    }
};
