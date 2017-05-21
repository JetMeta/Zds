#include <stdio.h>

int main()
{
    int i,j;

    while (scanf("%d %d",&i,&j)!=EOF)
    {
        printf("%ld\n",i+j);
    }

    return 0;
}
