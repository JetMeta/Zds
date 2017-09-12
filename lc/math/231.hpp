// v1 use bits count; here reference : use n&(n-1) trick.
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return n > 0 && !(n&(n - 1));
    }
};