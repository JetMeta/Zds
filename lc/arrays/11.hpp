class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int max_water = 0;

        for (auto it1 = height.begin(); it1!= height.end(); ++it1)
        {
            for (auto it2 = height.end() -1 ; it2 > it1; --it2)
            {
                if (*it2 >= *it1)
                {
                    const int cur = (it2 - it1)*(*it1);

                    if (cur > max_water)
                    {
                        max_water = cur;
                    }

                    break;
                }
                else
                {
                    const int cur = (it2 - it1)*(min(*it1,*it2));

                    if (cur > max_water)
                    {
                        max_water = cur;
                    }
                }
            }
        }

        return max_water;
    }
};
