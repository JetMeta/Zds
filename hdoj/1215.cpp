#include <stdio.h>
#include <iostream>
using namespace std;

int a[500001];

int main()
{
    int m,n,i,j;
    for(i=1; i<=500000; i++) /////1每个人都有先加上去
        a[i]=1;
    for(i=2; i<=250001; i++) ///只要一半就好，超过了连除2都不可能，就更别说因子了
    {
        for(j=i+i; j<=500000; j+=i) ////只要是i的倍数的数肯定含有i这个因子，i自身就不加了，从i的下个开始
        {
            a[j]+=i;//所以加i上去
        }
    }
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
    return 0;
}
