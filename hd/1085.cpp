#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void f(int sz[])
{
    int i = 0,j=0,k=0;
    int index = 0;
    int sum = sz[0]*1+sz[1]*2+sz[2]*5+1;

    char* psz = (char*)malloc(sum*sizeof(char));
    memset(psz,0,sizeof(char)*sum);

    for (i = 0 ; i < sz[2]+1; ++i)
    {
        for (j = 0 ; j < sz[1]+1; ++j)
        {
            index = j*2+i*5;
            memset(&psz[index],1,sz[0]+1);
        }
    }

    for (i = sz[0]+1; i < sum ; ++i)
    {
        if (psz[i] == 0)
        {
            printf("%d\n",i);
            break;
        }
    }

    if (i == sum)
    {
        printf("%d\n",i);
    }

    free(psz);
}

int main()
{
    int sz[3] = {0};

    while((scanf("%d%d%d",&sz[0],&sz[1],&sz[2])!=EOF)&&!(sz[0]==0&&sz[1]==0&&sz[2]==0))
    {
        f(sz);
    }

    return 0;
}
