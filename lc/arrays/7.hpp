#include <cmath>
#include <iostream>
#include <stack>
#include <algorithm>

class Solution7
{
public:
    int count_bits(int x)
    {
        int bits_cnt = 0;
        int y = abs(x);

        while (y > 0)
        {
            ++bits_cnt;

            y >>= 1;
        }

        return bits_cnt;
    }

    // 123 -- > ³öÕ»Ë³Ðò 3 2 1
    stack<int> process_rev(int x)
    {
        int y = abs(x);
        stack<int> s;
        auto b = process_seq(y);

        while (!b.empty())
        {
            s.push(b.top());
            b.pop();
        }

        return s;
    }

    // 123 -> ³öÕ»Ë³Ðò 1,2,3
    stack<int> process_seq(int x)
    {
        int y = abs(x);
        stack<int> s;

        while (y > 0)
        {
            int n = y / 10;
            int l = y - n * 10;

            s.push(l);
            y = n;
        }

        return s;
    }

    bool compare_stack(stack<int> s1, stack<int> s2)
    {
        while (!s1.empty())
        {
            if (s2.top() > s1.top())
            {
                return true;
            }
            else
            {
                if (s2.top() < s1.top())
                {
                    return false;
                }
            }

            s1.pop();
            s2.pop();
        }

        return false;
    }

    int result(stack<int>& s)
    {
        while (s.top() == 0)
        {
            s.pop();
        }

        int res = 0;
        while (!s.empty())
        {
            res = res * 10 + s.top();
            s.pop();
        }

        return res;
    }

    int reverse(int x)
    {
        if (x == 0)
        {
            return 0;
        }

        if (x == std::numeric_limits<int>::min())
        {
            return 0;
        }

        const int sign = x > 0 ? 1 : -1;

        stack<int> s_max = process_seq(std::numeric_limits<int>::max());
        stack<int> s2 = process_rev(x);

        if (s2.size() == s_max.size())
        {
            if (compare_stack(s_max, s2))
            {
                return 0;
            }
            else
            {
                return result(s2)*sign;
            }
        }
        else
        {
            return result(s2)*sign;
        }
    }
};
