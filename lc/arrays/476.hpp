// 3ms
class Solution
{
public:
    int find_highest_bit(int num)
    {
        int idx = -1;
        int real_idx = idx;

        while (num > 0 )
        {
            ++idx;

            if (num & 1)
            {
                real_idx = idx;
            }

            num >>= 1;
        }

        return real_idx;
    }

    int findComplement(int num)
    {
        const int high = find_highest_bit(num);

        int idx = 0;
        int res = 0;

        while (idx <= high)
        {
            if (num & 1)
            {
            }
            else
            {
                int tmp = 1 << idx;
                res = tmp + res;
            }

            num >>= 1;
            ++idx;
        }

        return res;
    }
};

// 3ms, short code, final
class Solution {
public:
	int findComplement(int num) {
		const double f2 = log10(2);
		const double f10 = log10(num);
		const unsigned int n = static_cast<unsigned int>(ceil(f10 / f2));

		const int mask = 0xffffffff << n;
		return ~(mask | num);
	}
};
