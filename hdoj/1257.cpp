#include <iostream>
#include <cstdio>

using namespace std;

int dp[10001];
int a[10001];
int n;

int main ()
{
    int i, j, max;
    while (scanf ("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)
            scanf ("%d", &a[i]);

        memset (dp, 0, sizeof (dp));
        dp[n] = 1;
        for (i = n - 1 ; i >= 1; i--)
        {
            max = 1;
            for (j = i + 1; j <= n; j++)
            {
                if (a[j] > a[i] && max < dp[j] + 1)
                    max = dp[j] + 1;
            }

            dp[i] = max;
        }

        max = 0;
        for (i = 1; i <= n; i++)
            if (dp[i] > max) max = dp[i];
        printf ("%d\n", max);
    }

    return 0;
}
