#include<stdio.h>
__int64 zuhe(__int64 a,__int64 b)
{
    __int64 t=1,i;
    if(a<b) return 0;
    if(b==0||a==b) return 1;
    if(b==1||a-1==b) return a;

    for(i=1; i<=a-b; i++)
    {
        t=t*(b+i)/i;
    }
    return t;

}
int main()
{
    int n,a,b,t;
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            scanf("%d%d",&a,&b);
            printf("%I64d\n",zuhe(a,b));
        }
    }
    return 0;
}
