#include <stdio.h>

int main()
{
    int i,j;

    while(scanf("%x %x",&i,&j)!=EOF)
    {
        printf("%d\n",i+j);
    }

    return 0;
}
