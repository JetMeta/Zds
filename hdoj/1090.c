#include <stdio.h>

int main()
{
    int n = 0;
    int op1,op2;

    scanf("%d",&n);

    while(n-- > 0)
    {
        scanf("%d %d",&op1,&op2);
        printf("%d\n",op1+op2);
    }

    return 0;
}
