#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> int_pair;

bool comp(const int_pair& e1,const int_pair& e2)
{
    return (float)e1.first/e1.second > (float)e2.first/e2.second;
}

int main()
{
    int i = 0;
    int m,n;
    float fsum = 0.0;

    while(scanf("%d %d",&m,&n)!=EOF&&(m!=-1&&n!=-1))
    {
        fsum = 0.0;
        vector<int_pair> vp;
        int_pair ip;

        while(n--)
        {
            scanf("%d %d",&ip.first,&ip.second);
            vp.push_back(ip);
        }

        sort(vp.begin(),vp.end(),comp);

        vector<int_pair>::iterator iter = vp.begin();

        while(m > 0&&iter!=vp.end())
        {
            ip = *iter++;
            if (m >= ip.second)
            {
                fsum += ip.first;
                m-=ip.second;
            }
            else
            {
                fsum+= (float)(ip.first)/ip.second*m;
                m=0;
            }
        }

        printf("%.3f\n",fsum);
    }

    return 0;
}
