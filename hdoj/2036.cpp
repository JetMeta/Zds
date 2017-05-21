#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vp::iterator vpi;

void f(vp& myvp)
{
    double sum = 0.0f;
    vpi iter;

    for(iter=myvp.begin(); iter!=myvp.end(); ++iter)
    {
        pi pi1,pi2;
        pi1 = *iter;
        ++iter;
        if (iter != myvp.end())
        {
            pi2 = *iter;
        }
        else
        {
            pi2 = *myvp.begin();
        }
        --iter;
        sum += pi1.first*pi2.second - pi1.second*pi2.first;
    }

    sum = fabs(sum);
    sum /=2;

    printf("%.1f\n",sum);

}

int main()
{
    int n;
    //int x,y;

    while((scanf("%d",&n)!=EOF)&&n!=0)
    {
        vp myvp;
        while(n--)
        {
            pi mypi;
            scanf("%d %d",&mypi.first,&mypi.second);
            myvp.push_back(mypi);
        }

        f(myvp);
    }

    return 0;
}
