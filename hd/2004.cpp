#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        if (n< 0 || n > 100)
        {
            printf("Score is error!\n");
        }

        if (n > 89 && n <101)
        {
            printf("A\n");
        }

        if (n > 79 && n <90)
        {
            printf("B\n");
        }

        if (n > 69 && n <80)
        {
            printf("C\n");
        }

        if (n > 59 && n <70)
        {
            printf("D\n");
        }

        if (n > -1 && n <60)
        {
            printf("E\n");
        }
    }

    return 0;
}
