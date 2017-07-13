#include <iostream>
#include <cstdio>

//z 感觉题目很多地方交代不清楚。
//z 先放过。

using namespace std;

void f(float sum,float day,float d1,float d2,float d3)
{
    float sum1;
    float sum2;

    //z 提前取出
    sum1 = sum * (float)day/365*d1/100 + sum;
    sum1 = sum1 *(1+d3/100);

    sum2 = sum * (1+3.7/100*(day+365)/365);

    printf("%.1f\n%.1f\n",sum1,sum2);
}

int main()
{
    int n = 0;
    float sum = 0.0;
    float day;
    float d1;
    float d2;
    float d3;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%f %f %f %f %f",&sum,&day,&d1,&d2,&d3);

        f(sum,day,d1,d2,d3);
    }

    return 0;
}
