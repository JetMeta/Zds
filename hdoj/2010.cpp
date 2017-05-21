#include <stdio.h>
#include <vector>

using namespace std;

int IsDaffodil(int n)
{
    int sum = n;
    int i,j,k;

    k= n%10;
    n/=10;
    j=n%10;
    n/=10;
    i=n;

    if (sum == (k*k*k + i*i*i + j*j*j))
    {
        return 1;
    }

    return 0;
}

int main()
{
    int i =0;
    int l,r;

    while(scanf("%d %d",&l,&r)!=EOF)
    {
        vector<int> vi;

        for (i = l; i<r+1; ++i)
        {
            if (IsDaffodil(i))
            {
                vi.push_back(i);
            }
        }

        if (vi.empty())
        {
            printf("no\n");
        }
        else
        {
            int icnt = 0;
            vector<int>::iterator it;
            for (it=vi.begin(); it!=vi.end(); ++it)
            {
                ++icnt;
                if (icnt == vi.size())
                {
                    printf("%d\n",*it);
                }
                else
                {
                    printf("%d ",*it);
                }
            }
        }
    }

    return 0;
}
