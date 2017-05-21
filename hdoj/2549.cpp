#include <stdio.h>

//z 倒腾了很久，主要没有考虑小数点后有m个数，而给出的n>m的情况.

int main()
{
    int n;
    int c;
    int m;
    int index = 0;
    char sz[6] = {'\0'};
    scanf("%d",&n);

    while(n--)
    {
        while((c=getchar())!='.');

        for (index = 0 ; index < 6; ++index)
        {
            sz[index] = '0';
        }

        index = 0;
        while((c=getchar())!=' '&& index <6)
        {
            sz[index] = c;
            ++index;
        }

        if (c==' ')
        {
            scanf("%d",&m);
        }
        else
        {
            while((c=getchar())!=' ');
            scanf("%d",&m);
        }
        printf("%c\n",sz[m-1]);
    }

    return 0;
}
