#include <stdio.h>

int main()
{
    int i,j;
    int k = 0;

    while(( scanf("%d %d",&i,&j)) != EOF)
    {
        printf("%d\n",i+j);
    }

    return 0;
}
