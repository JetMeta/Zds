#include<iostream>
using namespace std;

int main()
{
    int i,n,j;
    long int sum,temp,m;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        temp=1;
        sum=1;
        for(j=1; j<m; j++)
        {
            temp=temp+2;
            sum=sum+temp;
            sum=sum%10000;
        }
        cout<<sum<<endl;
    }
    return 0;
}
