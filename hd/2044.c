#include <stdio.h>

int path(int i , int j)
{
    if (i == j - 2)
    {
        return 2;
    }

    if (i == j - 1)
    {
        return 1;
    }

    if (i >= j)
    {
        return 0;
    }

    return path(i+1,j) + path(i+2,j);
}

//z 1,2
int path2(int i,int j)
{
    int last = 0;
    int sum = 0;
    j = j-i;

    if (j < 1)
    {
        return 0;
    }

    if (j == 1)
    {
        return 1;
    }

    if (j == 2)
    {
        return 2;
    }

    last = 1;
    sum = 2;
    for (i = 3; i <= j ; ++i)
    {
        sum += last;
        last = sum;
    }

    return sum;
}

__int64 path3(int j)
{
    __int64 temp = 0;
    __int64 last = 0;
    __int64 sum =0;
    int i =0;

    if (j < 1)
    {
        return 0;
    }

    if (j == 1)
    {
        return 1;
    }

    if (j == 2)
    {
        return 2;
    }

    last = 1;
    sum =  2;
    for (i = 3 ; i <= j; ++i)
    {
        temp = last;
        last = sum;
        sum += temp;
    }

    return sum;
}

int main()
{
    int n = 0;
    int i,j;

    scanf("%d",&n);

    while(n-- > 0)
    {
        scanf("%d %d",&i,&j);
        printf("%I64u\n",path3(j-i));
    }

    return 0;
}
