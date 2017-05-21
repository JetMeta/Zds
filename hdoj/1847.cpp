#include <stdio.h>

//z 抓牌，每次为1，2，4，8，。。
//z 谁先抓完 kick 先手，cici后手

//z 对数的二进制形式和1进行处理
void f2(int n)
{
    int nc = n;
    int icnt = 0;
    while(n>0)
    {
        if (n&1 == 1)
        {
            ++icnt;
        }

        n >>= 1;
    }

    if (icnt&1||nc&&1)
    {
        printf("Kiki\n");
    }
    else
    {
        printf("Cici\n");
    }
}

void f(int n)
{
    if (n%3 == 1 || n%3 == 2)
    {
        printf("Kiki\n");
    }
    else
    {
        printf("Cici\n");
    }
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        f(n);
    }

    return 0;
}
