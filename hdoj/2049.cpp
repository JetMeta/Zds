#include<iostream>
using namespace std;

long long ca(int a,int b)
{
    long long i,s=1;
    if(a==b)return 1;
    if(a-b<b)return ca(a,a-b);
    for(i=a; i>a-b; i--)
        s*=i;
    for(i=b; i>1; i--)
        s/=i;
    return s;
}

int main()
{
    int c;
    long long a[21];
    a[1]=0;
    a[2]=1;
    a[3]=2;
    for(int i=4; i<=20; i++)
        a[i]=(a[i-2]+a[i-1])*(i-1);
    cin>>c;
    while(c--)
    {
        int n,m;
        cin>>n>>m;
        //cout<<ca(n,m)<<endl;
        //cout<<a[m]<<endl;
        cout<<ca(n,m)*a[m]<<endl;
    }
    return 0;
}
