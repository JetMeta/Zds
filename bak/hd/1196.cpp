#include <stdio.h>

//z 求数左面出现的第一位1的位置
int f(int n)
{
    int sum = 1;

    while(n--)
    {
        sum = sum<<1;
    }

    return sum;
}

int main()
{
    int cnt = 0;
    int n = 0 ;

    while(scanf("%d",&n)&&n!=0)
    {
        cnt = 0;

        while(!(n&1))
        {
            ++cnt;
            n = n >> 1;
        }

        printf("%d\n",f(cnt));
    }

    return 0;
}
