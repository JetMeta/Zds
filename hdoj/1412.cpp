#include <cstdio>
#include <set>

using namespace std;

int main()
{
    int m,n,t;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        set<int> si;

        while(m--)
        {
            scanf("%d",&t);
            si.insert(t);
        }

        while(n--)
        {
            scanf("%d",&t);
            si.insert(t);
        }

        set<int>::iterator iter;
        for (iter = si.begin(); iter!=si.end(); ++iter)
        {
            ++iter;

            if (iter == si.end())
            {
                --iter;
                printf("%d",*iter);
            }
            else
            {
                --iter;
                printf("%d ",*iter);
            }
        }

        printf("\n");
    }

    return 0;
}
