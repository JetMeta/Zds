#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int sum=0;
        int cnt = 0;
        int t = 0;
        int nc = n;
        vector<int> vi;
        vector<int>::iterator vii;

        while(nc--)
        {
            scanf("%d",&t);
            vi.push_back(t);
        }

        sort(vi.begin(),vi.end());

        for (vii=vi.begin(); vii!=vi.end(); ++vii)
        {
            if (m+1>*vii)
            {
                cnt+=m/(*vii);
                m%=*vii;
            }
            else
            {
                break;
            }
        }

        printf("%d\n",cnt);
    }

    return 0;
}
