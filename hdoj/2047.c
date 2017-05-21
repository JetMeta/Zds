#include<iostream>

using namespace std;

__int64 list[42]= {0,3,8};

int main()
{
    int i;
    int n;

    for(i=3; i<42; i++)
        list[i]=2*(list[i-1]+list[i-2]);

    while(cin>>n)
        cout<<list[n]<<endl;

    return 0;
}
