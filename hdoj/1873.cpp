#include <stdio.h>
#include <queue>

using namespace std;

struct patient
{
    int id;
    int priority;

    patient(int _id,int _pri):id(_id),priority(_pri) {}
};

bool operator<( patient a, patient b )
{
    if( a.priority == b.priority ) return a.id > b.id;
    return a.priority < b.priority;
}

int main()
{
    int n ;
    int icnt = 0;
    int iq,ip;
    char sz[4] = {'\0'};
    int i = 0;

    while(scanf("%d",&n)!=EOF)
    {
        priority_queue<patient> q[3];

        icnt = 1;
        while(n--)
        {
            scanf("%s",sz);

            if (sz[0] == 'I')
            {
                scanf("%d %d",&iq,&ip);
                patient pat(icnt,ip);
                q[iq-1].push(pat);
                ++icnt;
            }
            else
            {
                scanf("%d",&iq);

                if (q[iq-1].empty())
                {
                    printf("EMPTY\n");
                }
                else
                {
                    patient p = q[iq-1].top();
                    printf("%d\n",p.id);
                    q[iq-1].pop();
                }
            }
        }
    }

    return 0;
}
