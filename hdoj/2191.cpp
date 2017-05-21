#include<iostream>
#include<stdio.h>
#include<string.h>
/*----------------------*Global Variable*----------------------*/
//n,m,p,h,c对应题目中的变量，M是处理后的物品个数P，H分别对应p,h
//bag是粮食的重量
int n,m,p,h,c,M,P[2001],H[2001],bag[101];

//*=======================*Main Program*=======================*//
using namespace std;

int main()
{
    //freopen("input","r",stdin);
    int C;
    scanf("%d",&C);
    while(C--)
    {
        scanf("%d%d",&n,&m);
        M=0;
        memset(bag,0,sizeof(bag));//每次都要清零
        while(m--)
        {
            scanf("%d%d%d",&p,&h,&c);
            while(c) //这个循环是二进制思想处理背包数目
            {
                int tem=(c+1)/2;
                c-=tem;
                M++;
                P[M]=p*tem;
                H[M]=h*tem;
            }
        }
        for(int i=1; i<=M; ++i)
            for(int j=n; j>=P[i]; --j)
                bag[j]=max(bag[j],bag[j-P[i]]+H[i]);
        printf("%d\n",bag[n]);
    }

    return 0;
}
