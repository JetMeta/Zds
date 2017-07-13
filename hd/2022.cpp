#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int m,n,i,j,l,r,score,t,max;

    while(cin>>m>>n)
    {
        max=-1;
        for(i=1; i<=m; i++)
            for(j=1; j<=n; j++)
            {
                cin>>score;
                if(abs(score)>max)
                {
                    max=abs(score);
                    l=i;
                    r=j;
                    t=score;
                }
            }
        cout<<l<<" "<<r<<" "<<t<<endl;
    }
    return 0;
}
