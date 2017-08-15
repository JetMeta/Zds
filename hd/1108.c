#include <stdio.h>

int main()
{
    int k = 0;
    int i = 0, j =0;
    long sum = 0;

    while(scanf("%d %d",&i,&j)!=EOF)
    {
        sum = i*j;

        for (k = 1 ; k <= sum ; ++k)
        {
            if (((k%i) == 0) &&( (k%j) == 0))
            {
                printf("%d\n",k);
                break;
            }
        }
    }

    return 0;
}
