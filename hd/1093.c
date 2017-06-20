#include <stdio.h>

int main()
{
    int n = 0;
    int m =0;
    int op = 0;
    int sum = 0;

    scanf("%d",&n);
    while(n-- > 0)
    {
        scanf("%d",&m);

        sum = 0;

        while(m-- >0)
        {
            scanf("%d",&op);
            sum += op;
        }

        printf("%d\n",sum);
    }

    return 0;
}
