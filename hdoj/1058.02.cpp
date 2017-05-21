#include<stdio.h>
int f[5843];
int min4(int a,int b,int c,int d)
{
    int m=a;
    if(b<m) m=b;
    if(c<m) m=c;
    if(d<m) m=d;
    return m;
}
int main()
{
    f[1]=1;
    int i=1,j=1,k=1,m=1;
    int min,mi=2,n,max=1;
    while(mi<5843)
    {
        min=min4(f[i]*2,f[j]*3,f[k]*5,f[m]*7);
        if(f[i]*2==min)
        {
            if(min>max)//·ÀÖ¹ÖØ¸´¡­¡­
            {
                i++;
                f[mi]=min;
                max=f[mi];
                mi++;
            }
            else
                i++;
        }
        else if(min==f[j]*3)
        {
            if(min>max)
            {
                j++;
                f[mi]=min;
                max=f[mi];
                mi++;
            }
            else
                j++;
        }
        else if(min==f[k]*5)
        {
            if(min>max)
            {
                k++;
                f[mi]=min;
                max=f[mi];
                mi++;
            }
            else
                k++;
        }
        else if(min==f[m]*7)
        {
            if(min>max)
            {
                m++;
                f[mi]=min;
                max=f[mi];
                mi++;
            }
            else
                m++;
        }

    }
    while(scanf("%d",&n),n)
    {
        if(n%100==11||n%100==12||n%100==13||n%10>3||n%10==0)
            printf("The %dth humble number is %d.\n",n,f[n]);
        else if(n%10==1)
            printf("The %dst humble number is %d.\n",n,f[n]);
        else if(n%10==2)
            printf("The %dnd humble number is %d.\n",n,f[n]);
        else if(n%10==3)
            printf("The %drd humble number is %d.\n",n,f[n]);
    }
    return 0;
}
