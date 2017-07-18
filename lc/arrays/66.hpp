class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        const int len = digits.size();
        if (digits[len - 1] + 1< 10)
        {
            digits[len - 1] += 1;
            return digits;
        }
        else
        {
            digits[len-1] = digits[len - 1] + 1 - 10;
            bool is_carry = true;
            for (auto it = digits.rbegin() + 1; it != digits.rend(); ++it)
            {
                if (is_carry)
                {
                    if (*it + 1 > 9)
                    {
                        is_carry = true;
                        *it = *it + 1 - 10;
                    }
                    else
                    {
                        is_carry = false;
                        *it = *it + 1;
                    }
                }
            }

            if (is_carry)
            {
                digits.insert(digits.begin(), 1);
            }

            return digits;
        }
    }
};
