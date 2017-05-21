#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int * pi = NULL;

static void Prime()
{
    int i = 0;
    int j = 0;
    int n = sqrt(16001.0);

    pi[1]=1;
    pi[2]=1;
    pi[3]=0;

    for (i = 2; i<n+1; ++i)
    {
        for (j=2; i*j<16001; ++j)
        {
            pi[i*j]=1;
        }
    }
}

int main()
{
    int n;
    int cnt = 0;
    pi = (int*)malloc(16001*sizeof(int));
    memset(pi,0,16001*sizeof(int));

    Prime();

    while(scanf("%d",&n)!=EOF&&(n>0))
    {
        ++cnt;
        if (pi[n]==0)
        {
            printf("%d: yes\n",cnt);
        }
        else
        {
            printf("%d: no\n",cnt);
        }
    }

    return 0;
}
