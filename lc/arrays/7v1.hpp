class Solution7v1
{
public:
    int reverse(int x)
    {

        if (!x)
        {
            return x;
        }

        int res = 0;

        while (x != 0)
        {
            const int new_x = x / 10;
            int l = x - new_x*10;
            const int old_res = res;
            res = res * 10 + l;

            if ((res - l) / 10 != old_res)
            {
                return 0;
            }

            x = new_x;
        }

        return res;
    }
};
