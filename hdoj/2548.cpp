#include <iostream>
#include <iomanip>

using namespace std;

double ep = 1e-6;

//z 总的时间一定，总的速度一定，总的路程就是一定的了。。。
static void f(double u,double v,double w,double l)
{
    cout << setprecision(3) << fixed << (l/(u+v))*w << endl;
}

int main()
{
    int n;
    double u,v,w,l;

    cin >> n;

    while(n--)
    {
        cin >> u >> v >> w >> l;

        f(u,v,w,l);
    }

    return 0;
}
