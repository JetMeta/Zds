#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* psz = NULL;

void IsPrime()
{
    int i = 1;
    int j = 0;

    for (i = 2; i < 10001; ++i)
    {
        for (j = i*i; j < 10001; j+=i)
        {
            psz[j] = 1;
        }
    }
}

void f(int n)
{
    int icnt = 0;
    int i = 0;

    for (i = 2; i < n/2; ++i)
    {
        if (psz[i]==0 && psz[n-i]==0)
        {
            ++icnt;

            //printf("%d: %d %d\n",icnt,i,n-i);
        }
    }

    printf("%d\n",icnt);
}

int main()
{
    int n ;
    psz = (int*)malloc(10001*sizeof(int));
    memset(psz,0,10001*sizeof(int));

    IsPrime();
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        f(n);
    }

    return 0;
}
