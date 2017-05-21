#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

typedef pair<int,int> pii;
typedef map<int,int> mi;

class myFunctor
{
    int icnt;
public:
    myFunctor():icnt(0)
    {
    }

    int operator()(pii mpii)
    {
        if(mpii.second==0)
        {
            printf("%d ",mpii.first);
            ++icnt;
        }

        return icnt;
    }

    operator int()
    {
        return icnt;
    }
};

int main()
{
    int t;
    int n,m;
    int icnt = 0;

    while(scanf("%d %d",&n,&m)!=EOF&&!(n==0&&m==0))
    {
        icnt = 0;
        mi myHash;
        mi::iterator mii;

        while(n--)
        {
            scanf("%d",&t);
            myHash[t] = 0;
        }

        while(m--)
        {
            scanf("%d",&t);
            if (myHash.find(t)!=myHash.end())
            {
                myHash[t] = 1;
            }
        }

        int icc = 0;
        icc = for_each(myHash.begin(),myHash.end(),myFunctor());

        if (icc == 0)
        {
            printf("NULL\n");
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
