#include<stdio.h>

int main()
{
    int n,i;

    while(scanf("%d",&n)!=EOF)
    {
        long sum=0;
        for(i=1; i<=n; i++)
            sum=sum+i;
        printf("%ld\n\n",sum);
    }

    return 0;
}
