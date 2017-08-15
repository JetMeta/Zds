#include <stdio.h>

int main()
{
    int min = 0;
    int n,u,d;

    scanf("%d",&n);

    while(n!=0)
    {
        min = 0;
        scanf("%d %d",&u,&d);

        for (min = 0 ; ; ++min)
        {
            if ((n-min*(u-d)) <=u)
            {
                break;
            }
        }

        printf("%d\n",2*min+1);

        scanf("%d",&n);
    }

    return 0;
}
