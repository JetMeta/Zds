#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
        while(n--)
        {
            double a,b,c,d;
            int i;
            scanf("%lf %lf",&a,&b);
            for(i=1;; i++)
            {
                c=(double)i*a/100;
                d=(double)i*b/100;
                if((int)c<c && ((int)c+1)==(int)d)
                    break;
            }
            printf("%d\n",i);
        }
}
