#include <stdio.h>

int main()
{
    char c;
    int i = 0;
    int n;

    scanf("%d",&n);
    scanf("%c",&c);

    while(n--)
    {
        for (i = 0 ; i < 6; ++i)
        {
            scanf("%c",&c);
        }
        printf("6");
        for (i = 0 ; i < 5; ++i)
        {
            scanf("%c",&c);
            printf("%c",c);
        }
        scanf("%c",&c);
        printf("\n");
    }

    return 0;
}
