#include <stdio.h>
#include <vector>

using namespace std;

static void f(const int m)
{
    int i = 0,j=0;
    int cnt=0;
    vector<int> vi;
    vector<int>::iterator vii;

    for (i = 0 ; i < m ; ++i)
    {
        vi.push_back(0);
    }

    for (i = 1; i < m+1; ++i)
    {
        for (vii = vi.begin(),j=1; vii!=vi.end(); ++vii,++j)
        {
            if (j%i==0)
            {
                *vii =!*vii;
            }
        }
    }


    for (vii = vi.begin(); vii!=vi.end(); ++vii)
    {
        if (*vii == 1)
        {
            ++cnt;
        }
    }

    printf("%d\n",cnt);
}

int main()
{
    int n;
    int m;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        f(m);
    }

    return 0;
}
