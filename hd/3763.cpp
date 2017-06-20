#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int m,n;
    int cnt = 0;
    int index = 0;
    int* psz=NULL;
    int* pend=NULL;

    while(scanf("%d%d",&m,&n)!=EOF&&!(m==0&&n==0))
    {
        cnt = m+n;
        index = 0;
        psz = (int*)malloc((cnt)*sizeof(int));

        while(cnt--)
        {
            scanf("%d",&psz[index++]);
        }

        cnt = m+n;
        sort(psz,psz+cnt);
        pend = unique(psz,psz+cnt);

        printf("%d\n",psz+cnt-pend);

        free(psz);
        psz = NULL;
    }

    return 0;
}
