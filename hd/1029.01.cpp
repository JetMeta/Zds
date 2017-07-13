#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int t;
    int nc = 0;

    while(scanf("%d",&n)!=EOF)
    {
        nc = n;
        vector<int> vi;

        while(n--)
        {
            scanf("%d",&t);
            vi.push_back(t);
        }

        sort(vi.begin(),vi.end());
        printf("%d\n",*((vi.end()-vi.begin())/2 + vi.begin()));
    }

    return 0;
}
