class Solution
{
public:
    int getSum(int num)
    {
        int sum = 0;
        while (num != 0)
        {
            const int l = num / 10;
            const int r = num - l*10;
            num = l;

            sum += r;
        }
        return sum;
    }

    int addDigits(int num)
    {
        int res = 0;
        while ((res = getSum(num)) > 9)
        {
            num = res;
        }

        return res;
    }
};
