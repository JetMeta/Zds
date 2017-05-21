#include <stdio.h>

int main()
{
    int n,m;

    while(scanf("%d%d",&n,&m)!=EOF&&!(n==0&&m==0))
    {
        if((n&1)&&(m&1))
        {
            printf("What a pity!\n");
        }
        else
        {
            printf("Wonderful!\n");
        }
    }

    return 0;
}
