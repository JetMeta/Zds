#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> pi;
typedef vector<pi> vi;
typedef vi::iterator iter;

class zfunc
{
public:
    bool operator() (const pi&v1,const pi&v2)
    {
        return v1.first<v2.first;
    }
protected:
private:
};

int main()
{
    int n;
    int sum,cnt;
    int s,t;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&sum,&cnt);
        vi zvi;
        iter it;
        double fcnt=0.0L;

        while(cnt--)
        {
            scanf("%d %d",&s,&t);
            zvi.push_back(pi(s,t));
        }

        sort(zvi.begin(),zvi.end(),zfunc());

        for (it = zvi.begin(); it!=zvi.end(); ++it)
        {
            if (sum > it->second*it->first)
            {
                fcnt += it->second;
                sum -=it->second*it->first;
            }
            else
            {
                fcnt += (double)sum/it->first;
                break;
            }
        }

        printf("%.2f\n",fcnt);
    }

    return 0;
}
