#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

static void f(double a,double b,double c,double d)
{
    cout << setprecision(1) << fixed << sqrt((a-c)*(a-c)+(b-d)*(b-d))<<endl;
}

int main()
{
    int n;
    double a,b,c,d;

    cin >> n;

    while(n--)
    {
        cin >> a >> b >> c >>d;

        f(a,b,c,d);
    }

    return 0;
}
