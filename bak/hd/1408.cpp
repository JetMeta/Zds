#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <stack>

using namespace std;

int main()
{
    double v, d;
    int time, sum;

    while(scanf("%lf %lf", &v, &d) != EOF)
    {
        int flag=0;
        sum = 0;
        time=0;
        for(int i=1; ; ++i)
        {
            for(int j=1; j<=i; ++j)
            {
                v -= d;
                sum++;
                if(v <= 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
                break;
            sum++;
        }
        printf("%d\n", sum);
    }

    return 0;
}
