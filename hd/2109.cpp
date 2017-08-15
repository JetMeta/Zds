#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int nc;
    int t;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        nc = n;
        vector<int> v1;
        vector<int> v2;

        while(nc--)
        {
            scanf("%d",&t);
            v1.push_back(t);
        }

        nc = n;

        while(nc--)
        {
            scanf("%d",&t);
            v2.push_back(t);
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        int i = 0,j = 0;
        vector<int>::iterator it1,it2;
        for (it1 = v1.begin(),it2=v2.begin(); it1!=v1.end(); ++it1,++it2)
        {
            if (*it1>*it2)
            {
                i+=2;
            }
            else
            {
                if (*it1==*it2)
                {
                    i+=1;
                    j+=1;
                }
                else
                {
                    j+=2;
                }
            }
        }

        printf("%d vs %d\n",i,j);
    }

    return 0;
}
