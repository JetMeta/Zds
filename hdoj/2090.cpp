#include <stdio.h>

double round(double sum)
{
    int r;
    __int64 isum = 0;

    sum *= 1000;
    isum = sum;
    r = isum%10;
    if (r >= 5)
    {
        isum +=10;
    }
    isum -=r;
    sum = isum;
    sum /=1000;

    return sum;
}


int main()
{

    double sum = 0.000;
    double op1,op2;
    char sz[1024] = {'\0'};
    int r;

    while(scanf("%s %lf %lf",&sz,&op1,&op2)!=EOF)
    {
        sum += round(op1*op2);
    }

    printf("%.1lf\n",sum);

    return 0;
}
