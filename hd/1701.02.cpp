#include <iostream>

using namespace std;

//z Wrong Answers

int gcd(int m,int n)
{
    if (n == 0)
    {
        return m;
    }
    else
    {
        return gcd(n,m%n);
    }
}

static void f(double p,double q)
{
    int i = 1;
    double a,b;
    while(1)
    {
        a = i*p/100;
        b = i*q/100;
        if (((int)a < a) && (((int)a+1)==(int)b))
        {
            cout << i << endl;
            break;
        }
        ++i;
    }
}

int main()
{
    int n;
    double p,q;

    cin >>n;

    while(n--)
    {
        cin >> p >> q;
        f(p,q);
    }

    return 0;
}
