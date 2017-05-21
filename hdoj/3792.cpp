#include<stdio.h>
#include<math.h>
#define N 100000

int main()
{
    int n,i,j,temp,a[N],b[N];
    a[0]=a[1]=0;
    for(i=2; i<N; i++)
    {
        a[i]=1;
    }
    temp=(int)sqrt((double)N);
    for(i=2; i<=temp; i++)
    {
        for(j=2*i; j<N; j+=i)
        {
            a[j]=0;
        }
    }
    b[0]=b[1]=b[2]=0;
    for(i=3; i<N; i++)
    {
        if(a[i]==1&&a[i-2]==1)
        {
            b[i]=b[i-1]+1;
        }
        else
        {
            b[i]=b[i-1];
        }
    }

    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
        {
            break;
        }

        printf("%d\n",b[n]);
    }
}
