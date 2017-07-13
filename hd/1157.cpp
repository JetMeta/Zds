#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef vi::iterator iter;

int main()
{
    int n;
    int k;

    while(scanf("%d",&n)!=EOF)
    {
        vi zvi;
        while(n--)
        {
            scanf("%d",&k);
            zvi.push_back(k);
        }

        sort(zvi.begin(),zvi.end());

        printf("%d\n",*(zvi.begin()+(zvi.end()-zvi.begin())/2));
    }

    return 0;
}
