#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int icnt = 0;
    int temp = 0;
    int i = 0,j = 0,k=0;
    int n = 0,m=0;
    int camp_cnt = 0;
    int * psz = NULL;

    char pc[6] = {'\0'};

    scanf("%d",&n);

    while(n--)
    {
        ++icnt;
        printf("Case %d:\n",icnt);
        scanf("%d",&m);
        psz = (int *)malloc(m*sizeof(int));
        memset(psz,'\0',m*sizeof(int));

        for (i = 0 ; i < m ; ++i)
        {
            scanf("%d",&temp);
            psz[i] = temp;
        }

        while(scanf("%s",pc)&&pc[0]!='E')
        {
            scanf("%d %d",&i,&j);

            switch (pc[0])
            {
            case 'A':
                psz[i-1]+=j;
                break;
            case 'S':
                psz[i-1]-=j;
                break;
            case 'Q':
            {
                int sum = 0;
                for (k = i - 1; k < j ; ++k)
                {
                    sum += psz[k];
                }
                printf("%d\n",sum);
                break;
            }
            }
        }
    }

    return 0;
}
