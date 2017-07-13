#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vp::iterator vpi;

bool less_second(const pi& a,const pi& b)
{
    if (a.first < b.first)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool less_second4(const pi& a,const pi& b)
{
    if (a.second < b.second)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool less_second2(const pi& a,const pi& b)
{
    //return (a.second < b.second? true:(a.second-a.first < b.second-b.first)? true:false);

    if (a.second - a.first < b.second - b.first)
    {
        return true;
    }
    else
    {
        if (a.second < b.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool less_second3(const pi& a,const pi& b)
{
    //return (a.second < b.second? true:(a.second-a.first < b.second-b.first)? true:false);

    if (a.first < b.first)
    {
        return true;
    }
    else
    {
        if (a.second - a.first < b.second - b.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void f(vp& myvp)
{
    int i=0;
    int cnt = 1;
    vpi iter;
    sort(myvp.begin(),myvp.end(),less_second4);

    /*
    for (iter = myvp.begin();iter!=myvp.end();++iter)
    {
        printf("%d %d\n",iter->first,iter->second);
    }
    */

    iter = myvp.begin();
    int cmp = iter->second;
    iter++;
    for (; iter != myvp.end(); ++iter)
    {
        if (iter->first>=cmp)
        {
            ++cnt;
            cmp = iter->second;
        }
    }

    printf("%d\n",cnt);
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF&&n!=0)
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
