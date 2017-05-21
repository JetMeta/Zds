#include<iostream>
#include<math.h>
using namespace std;

int DigNum(int number)
{
    double PI=acos(double(-1));
    double e=exp(double(1));
    return int(log10(sqrt(2*PI*number))+number*log10(number/e))+1;
}

int main()
{
    int num;
    cin>>num;

    while(num--)
    {
        int dig;
        cin>>dig;
        cout<<DigNum(dig)<<endl;
    }

    return 0;
}
