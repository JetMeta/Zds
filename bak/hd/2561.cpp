#include <stdio.h>
#include <stdlib.h>

int comp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n;
    int m ;
    int len = 0;
    int index = 0;

    int sz[10] = {0};

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        len = m;
        index = 0;

        while(m--)
        {
            scanf("%d",&sz[index++]);
        }

        qsort(sz,len,sizeof(int),comp);

        printf("%d\n",sz[1]);
    }

    return 0;
}
