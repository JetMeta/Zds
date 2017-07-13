/*
定义: 设m>1是正整数,整数a满足(a,m)=1,则使a^x=1(mod m)的最小x,称为a对模m的指数.
记为ordm(a).若ordm(a)=phi(m),则a叫做模m的原根.
定理1:设m>1是正整数,整数a满足(a,m)=1,则整数d满足a^d=1(mod m)的充要条件是ordm(a)|d.
推论1:设m>1是正整数,整数a满足(a,m),则ordm(a)|phi(m).
*/

#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const char path[]="D:\\yzzhoo0.txt";
int num[100000];
int prime[10000];
int p[50];
int all,m;
void findprime()//筛选素数
{
    int ans=1;
    for(int i=3; i<=100000; i+=2)
    {
        if(num[i]==1) continue;
        prime[ans]=i;
        for(int j=2*i; j<=100000; j+=i)
        {
            num[j]=1;
        }
        ans++;
    }
    prime[0]=2;
    all=ans;
    return ;
}
void find(int n)//因式分解
{
    memset(p,0,sizeof(p));
    int ans=0;
    for(int i=0; i<all; i++)
    {
        if(n<3) break;
        if(n%prime[i]==0)
        {
            p[ans]=prime[i];
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            ans++;
        }
    }
    if(n>3)
    {
        p[ans]=n;
        ans++;
    }
    m=ans;
    return ;
}
int cal(int a,int n,int k)//快速指数算法
{
    int c[100];
    int f=n;
    int i=0;
    int d=a;
    if(n<0)
    {
        if(a==1)
        {
            d=1;
        }
        else
        {
            d=1;
        }
    }
    else
    {
        if(n==0)
        {
            d=1;
        }
        while(f!=0)
        {
            c[i]=f%2;
            f=static_cast<int>(f/2);
            i++;
        }

        for(int j=i-1; j>=1; j--)
        {
            d=(d*d)%k;
            if(c[j-1]==1)
            {
                d=(d*a)%k;
            }
        }
        if(n==1)
        {
            d=a%k;
        }
    }
    return d;
}
int main()
{
    findprime();
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n%2==0||n==1)
        {
            printf("2^? mod %d = 1\n",n);
            continue;
        }
        find(n);
        int num=n;
        for(int i=0; i<m; i++)
        {
            num/=p[i];
            num*=(p[i]-1);
        }
        int min_n=num;
        int s=1;
        while(s==1)//如果整除num的数k满足2^kmodn==1再分解k看k的因子是否也有满足的
        {
            s=0;
            find(num);
            for(int i=0; i<m; i++)
            {
                if(cal(2,num/p[i],n)==1)
                {
                    if(num/p[i]<min_n)
                    {
                        min_n=num/p[i];
                        s=1;
                    }
                }
            }
            num=min_n;
        }
        printf("2^%d mod %d = 1\n",min_n,n);
    }
    return 0;
}
