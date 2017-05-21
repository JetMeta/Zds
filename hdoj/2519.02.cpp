#include <stdio.h>
//#include <iostream>

//using namespace std;

static void f(int i,int j)
{
    if(j == 0||i==j)
    {
        printf("1\n");
        return;
    }

    if(j>i)
    {
        printf("0\n");
        return;
    }

    if(j == 1 || i-1==j)
    {
        printf("%d\n",i);
        return;
    }

    int k;
    __int64 d1 = 1;

    for(k = 1; k < i-j + 1; ++k)
    {
        d1 = d1*(k+j)/k;
    }

    printf("%I64d\n",d1);
}

int main()
{
    int n;
    int i,j;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d%d",&i,&j);
        f(i,j);
    }

    return 0;
}
