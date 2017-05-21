#include <stdio.h>
#include <stdlib.h>

int comp(const void * a,const void * b)
{
    return ((*(int *)a) - (*(int*)b));
}

int main()
{
    int n;
    int len;
    int index = 0;
    int sz[128] = {0};
    int i;
    int sum = 0;

    while((scanf("%d",&n)!=EOF) && (n!=0))
    {
        len = n;
        index = 0;
        sum = 0;

        while(n--)
        {
            scanf("%d",&sz[index++]);
        }

        qsort(sz,len,sizeof(int),comp);

        i = 0;
        while(i < (len/2 +1))
        {
            sum += sz[i++]/2 + 1;
        }

        printf("%d\n",sum);
    }

    return 0;
}
