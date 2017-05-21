#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    int icnt = 0;

    while(scanf("%d",&n)&&n!=0)
    {
        icnt = 0;
        vector<int> vi;
        vector<int>::iterator vii;
        while(n--)
        {
            scanf("%d",&m);
            vi.push_back(m);
        }

        scanf("%d",&m);

        for(vii = vi.begin(); vii!=vi.end(); ++vii)
        {
            if (m == *vii)
            {
                ++icnt;
            }
        }

        printf("%d\n",icnt);
    }

    return 0;
}
