#include<iostream>
#include<cmath>
#include <cstdio>

using namespace std;

/*
int main()
{
    int n,x,y,z;

    while(cin>>n)
    {
        for(x=1;x<101;++x){
            for(y=1;y<101;++y){
                for(z=101;z>0;--z)
                {
                    if(x*x+y*y+z*z==n)
                    {
                        cout<<x<<" "<<y<<" "<<z<<endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
*/

int main()
{
    int n,x,i1,k1,i,k,s;
    while(scanf("%d",&n)!=EOF)
    {
        s=(int)sqrt((double)n);
        for(i=1; i<=s; i++)
        {
            i1=i*i;
            for(k=i; k<=s; k++)
            {
                k1=k*k;
                x=(int)sqrt((double)(n-i1-k1));
                if(x>=k&&x*x==n-i1-k1)goto le;
            }
        }
le:
        printf("%d %d %d\n",i,k,x);
    }
    return 0;
}
