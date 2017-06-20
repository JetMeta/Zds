#include <stdio.h>

int main()
{
    int n ;
    char c;
    int icnt = 0;
    scanf("%d",&n);
    scanf("%c",&c);

    while(n-->0)
    {
        icnt = 0;
        while((c = getchar())!='\n')
        {
            if ((c > '0'-1)&& (c <'9'+1))
            {
                ++icnt;
            }
        }

        printf("%d\n",icnt);
    }

    return 0;
}
