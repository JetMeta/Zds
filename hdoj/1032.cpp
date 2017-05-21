#include <stdio.h>

//z 3n + 1ÎÊÌâ
//z
/*
1.      input n
2.      print n
3.      if n = 1 then STOP
4.           if n is odd then n <- 3n + 1
5.           else n <- n / 2
6.      GOTO 2
*/

int sub_f(int n)
{
    int cnt = 0;
    int m = 0;

    while(n!=1)
    {
        ++cnt;
        if (n&1)
        {
            m = n << 1;
            m+=n + 1;
            n = m;
        }
        else
        {
            n = n >> 1;
        }
    }

    return cnt+1;
}

int f(int m,int n)
{
    int t = 0;
    int i = 0;
    int iMax = 0;

    for (i = m ; i < n+1; ++i)
    {
        t = sub_f(i);

        if (t > iMax)
        {
            iMax = t;
        }
    }

    return iMax;
}

int main()
{
    int m = 0,n = 0;
    int i = 0 ,j = 0;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if (m < n)
        {
            i = m;
            j = n;
        }
        else
        {
            i = n ;
            j = m;
        }

        printf("%d %d %d\n",m,n,f(i,j));
    }

    return 0;
}
