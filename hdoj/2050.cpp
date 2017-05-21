#include <stdio.h>

//z Н█¤▀иокй├Т

void f(int n)
{
    printf("%d\n",2*n*n-n+1);
}

int main()
{
    int n = 0;
    int m = 0;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        f(m);
    }

    return 0;
}
