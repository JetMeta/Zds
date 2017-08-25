class Solution
{
public:
    int cnt_digits(int x)
    {
        x = abs(x);
        return (x < 10 ? 1 :
                (x < 100 ? 2 :
                 (x < 1000 ? 3 :
                  (x < 10000 ? 4 :
                   (x < 100000 ? 5 :
                    (x < 1000000 ? 6 :
                     (x < 10000000 ? 7 :
                      (x < 100000000 ? 8 :
                       (x < 1000000000 ? 9 :
                        10)))))))));
    }

    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        const int len = cnt_digits(x);

        int val = abs(x);
        int tens = pow(10, len-1);

        while(val)
        {
            int s = val / tens;
            int t = val % 10;

            if (s != t)
            {
                return false;
            }

            val -= s*tens;
            val = val / 10;
            tens /= 100;
        }

        return true;
    }
};
