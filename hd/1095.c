#include <stdio.h>

int main()
{
    int i = 0, j = 0;

    while(scanf("%d %d",&i,&j)!=EOF)
    {
        printf("%d\n\n",i+j);
    }

    return 0;
}
