#include <stdio.h>

static void op(int op,int op1,int op2)
{
    switch(op)
    {
    case '+':
        printf("%d\n",op1+op2);
        break;
    case '-':
        printf("%d\n",op1-op2);
        break;
    case '*':
        printf("%d\n",op1*op2);
        break;
    case '/':
        if ((op1%op2) == 0)
        {
            printf("%d\n",op1/op2);
        }
        else
        {
            printf("%.2f\n",(float)op1/op2);
            break;
        }
        break;
    }
}

int main()
{
    int n;
    char c;
    int a,b;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%c",&c);
        scanf("%c",&c);
        scanf("%d%d",&a,&b);
        op(c,a,b);
    }

    return 0;
}
