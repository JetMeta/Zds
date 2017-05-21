#include <iostream>
using namespace std;

int main()
{
    int a,b,d;
    long n;
    int arry[49];
    arry[1]=1;
    arry[2]=1;
    cin>>a>>b>>n;
    while(a!=0&&b!=0&&n!=0)
    {
        for(d=3; d<=48; d++)
            arry[d]=(arry[d-1]*a%7+arry[d-2]*b%7)%7;
        cout<<arry[(n-1)%48+1]<<endl;
        cin>>a>>b>>n;
    }
}
