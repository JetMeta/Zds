#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double a[6] = {0.0L,};

    while((cin >> n )&&(n!=0))
    {
        while(n--)
        {
            cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
            cout << setprecision(1) << fixed << (a[0]+a[2]+a[4])/3 << " " << (a[1]+a[3]+a[5])/3 << endl;
        }
    }

    return 0;
}
