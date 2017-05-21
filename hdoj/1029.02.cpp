#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

static void sort_edition()
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
}

static void condition_method()
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

        int candidate;
        int nTimes = 0,i=0;

        vector<int>::iterator iter;
        for (iter = vi.begin(); iter!=vi.end(); ++iter)
        {
            if (nTimes == 0)
            {
                candidate = *iter;
                nTimes = 1;
            }
            else
            {
                if (candidate == *iter)
                {
                    ++nTimes;
                }
                else
                {
                    --nTimes;
                }
            }
        }

        printf("%d\n",candidate);
    }
}

int main()
{
    condition_method();

    return 0;
}
