#include <stdio.h>

int main()
{
    int n = 0;
    int op = 0;
    int sum = 0;

    scanf("%d",&n);

    while(n!=0)
    {
        sum = 0;
        while(n-- > 0)
        {
            scanf("%d",&op);
            sum += op;
        }

        printf("%d\n",sum);

        scanf("%d",&n);
    }

    return 0;
}
