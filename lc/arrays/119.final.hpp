// final
class Solution
{
public:
    int f(int i, int j)
    {
        if (j == 0 || j == i)
        {
            return 1;
        }
        else
        {
            return f(i - 1, j - 1) + f(i - 1, j);
        }
    }

    vector<int> getRow(int rowIndex)
    {
        const int len = rowIndex + 1;
        vector<int> v(len);
        vector<int> v_assist(len);

        for (size_t i = 0; i < len; ++i)
        {
            v_assist = v;
            for (size_t j = 0; j < i+1; j++)
            {
                if (j ==0 || i == j)
                {
                    v[j] = f(i, j);
                }
                else
                {
                    v[j] = v_assist[j - 1] + v_assist[j];
                }
            }
        }

        return v;
    }
};