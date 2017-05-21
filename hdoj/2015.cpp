#include <stdio.h>

int main()
{
    int i;
    int n,m;

    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for (i = 0 ; i < n-m; i+=m)
        {
            if (i == (n-m+1))
            {
                printf("%d",(2*i+m+1));
            }
            else
            {
                printf("%d ",(2*i+m+1));
            }
        }

        if (i < n)
        {
            printf("%d\n",n+i+1);
        }
    }

    return 0;
}
