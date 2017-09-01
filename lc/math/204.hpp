class Solution
{
public:
    int countPrimes(int n)
    {
        if (n < 3)
        {
            return 0;
        }

        bool* arr = new bool[n];

        arr[0] = arr[1] = false;
        arr[2] = true;

        for (size_t i = 3; i < n; i += 2)
        {
            arr[i] = true;
        }

        for (size_t i = 4; i < n; i += 2)
        {
            arr[i] = false;
        }

        int r = sqrt(n) + 1;

        int cnt = 0;
        ++cnt;
        for (size_t i = 3; i < r; ++i)
        {
            if (arr[i])
            {
                ++cnt;

                for (int j = i * 2; j < n; j += i)
                {
                    arr[j] = false;
                }
            }
        }

        if (r < 3)
        {
            r = 3;
        }

        for (size_t i = r; i < n; ++i)
        {
            if (arr[i])
            {
                ++cnt;
            }
        }

        delete[] arr;

        return cnt;
    }
};
