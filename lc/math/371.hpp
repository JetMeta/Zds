// Reasoning again. reference
class Solution
{
public:
    int getSum(int a, int b)
    {
        int _a, _b;
        while (b != 0)
        {
            _a = a ^ b;
            _b = (a & b) << 1;
            a = _a;
            b = _b;
        }

        return a;
    }
};
