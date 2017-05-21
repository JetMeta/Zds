#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Prime(char* sz)
{
    int i = 0;
    int j = 0;

    for (i = 2 ; i < 10002; ++i)
    {
        if (sz[0] == 0)
        {
            for (j = i*i ; j < 10002; j+=i)
            {
                sz[j] = 1;
            }
        }
    }
}

int main()
{
    char* sz = (char*)malloc((1+10000)*sizeof(char));
    int n;
    int i;
    memset(sz,0,10001*sizeof(char));
    Prime(sz);

    while(scanf("%d",&n)!=EOF)
    {
        for (i = n/2; i < 10002; ++i)
        {
            if (sz[i]== 0 && sz[n-i] == 0)
            {
                printf("%d %d\n",n-i,i);
                break;
            }
        }
    }

    return 0;
}
