#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

void f(int n,int m)
{
    int icnt = 0;
    int i = 0;
    vector<int> vi;

    n = n*100;

    for (i = n ; i<n+100; ++i)
    {
        if (i%m == 0)
        {
            ++icnt;
            vi.push_back(i%100);
        }
    }

    vector<int>::iterator vii;
    for (i = 0,vii = vi.begin(); vii!=vi.end(); ++vii,++i)
    {
        if (i == icnt -1)
        {
            if (*vii < 10)
            {
                cout << "0" << *vii << endl;
            }
            else
            {
                cout << *vii << endl;
            }
        }
        else
        {
            if (*vii < 10)
            {
                cout << "0"<<*vii << " ";
            }
            else
            {
                cout << *vii << " ";
            }
        }
    }
}

int main()
{
    int n,m;

    while(scanf("%d %d",&n,&m)&&!(n==0&&m==0))
    {
        f(n,m);
    }

    return 0;
}
