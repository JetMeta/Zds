#include <stdio.h>

int main()
{
    int m,n;

    while(scanf("%d%d",&m,&n)!=EOF)
    {
        if(((m+n)%86)==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}
