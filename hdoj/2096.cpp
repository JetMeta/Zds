#include <stdio.h>

/*
no mao,no sino!

对于小明来说:
1) 1234和34是相等的
2) 35+80=15

Sample Input
  2
  35 80
  15 1152


Sample Output
15
67
*/

void f(int op1,int op2)
{
    if (op1>100)
    {
        op1 = op1 %100;
    }

    if (op2 > 100)
    {
        op2 = op2 %100;
    }

    printf("%d\n",(op1+op2)%100);
}

int main()
{
    int n;
    int op1,op2;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d",&op1,&op2);
        f(op1,op2);
    }

    return 0;
}
