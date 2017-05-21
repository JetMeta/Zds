#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int n;
    int t;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        vector<int> vi;
        while(n--)
        {
            scanf("%d",&t);
            vi.push_back(t);
        }

        sort(vi.begin(),vi.end(),greater<int>());
        printf("%d\n",*vi.begin());
    }

    return 0;
}
