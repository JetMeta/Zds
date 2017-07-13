#include <stdio.h>

int main()
{
    int i = 0,j = 0;

    while((scanf("%d %d",&i,&j)!=EOF)&&((i != 0 ) || (j != 0)))
    {
        printf("%d\n",i+j);
    }

    return 0;
}
