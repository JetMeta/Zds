// to do : now brute force ; need to optimize
class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        size_t len = prices.size();
        int max = 0;
        int cur = 0;

        for (size_t i = 0; i < len; ++i)
        {
            for (size_t j = i+1; j < len; ++j)
            {
                cur = prices[j] - prices[i];

                if (cur > max)
                {
                    max = cur;
                }
            }
        }

        return max;
    }
};
