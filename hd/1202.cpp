#include <stdio.h>
#include <vector>

using namespace std;

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vp::iterator iter;

static void f(vp& zvp)
{
    iter it;
    double sum=0.0L;
    int cnt = 0;

    for (it=zvp.begin(); it!=zvp.end(); ++it)
    {
        cnt +=it->first;
        if (it->second==100)
        {
            sum+=4*it->first;
        }
        else
        {
            if (it->second<60)
            {
                sum+=0;
            }
            else
            {
                sum +=(it->second-50)/10*it->first;
            }
        }
    }

    if (cnt > 0)
    {
        printf("%.2f\n",sum/cnt);
    }
    else
    {
        printf("-1\n");
    }
}

static void f2(int n)
{
    int k;
    double cnt = 0.0L;
    double mp,m;
    double sum = 0.0L;

    while(n--)
    {
        scanf("%lf%lf",&mp,&m);

        if (m == -1)
        {
            continue;
        }

        cnt +=mp;

        if (m>=60.0&&m<101)
        {
            if (m >=90.0)
            {
                k=4;
            }
            else
            {
                if (m>=80.0)
                {
                    k=3;
                }
                else
                {
                    if(m>=70.0)
                    {
                        k = 2;
                    }
                    else
                    {
                        k = 1;
                    }
                }

            }

            sum += k*mp;
        }
        else
        {
        }
    }

    if (cnt>0)
    {
        printf("%.2f\n",sum/cnt);
    }
    else
    {
        printf("-1\n");
    }
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        f2(n);
    }

    return 0;
}
