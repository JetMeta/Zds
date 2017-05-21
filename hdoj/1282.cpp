#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;

static int Fbit(int n)
{
    int cnt = 0;

    while(n>0)
    {
        ++cnt;
        n /=10;
    }

    return cnt;
}

static int Ton(int cnt)
{
    int i = 0;
    int n = 1;

    for (i = 0 ; i < cnt ; ++i)
    {
        n*=10;
    }

    return n;
}

static int IsF(int n)
{
    int i = 0;
    int bitcnt = Fbit(n);
    int index = 0;

    int * psz = (int*)malloc(bitcnt*sizeof(int));
    memset(psz,0,bitcnt*sizeof(int));

    while(n > 0 )
    {
        psz[index++] = n%10;
        n/=10;
    }

    for (i = 0 ; i < bitcnt/2; ++i)
    {
        if (psz[i] == psz[bitcnt-i-1])
        {
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

static int RevF(int n)
{
    stack<int> si;
    int i = 0;
    int sum = 0;
    int icnt = 1;

    while(n>0)
    {
        i = n%10;
        n/=10;
        si.push(i);
    }

    while(!si.empty())
    {
        i = si.top();
        sum = i*icnt+sum;
        icnt*=10;
        si.pop();
    }

    return sum;
}

static int AddF(int n)
{
    return n+RevF(n);
}

static void PrintVec(vector<int>& vi)
{
    vector<int>::iterator itor;

    printf("%d\n",vi.size()-1);

    for (itor = vi.begin(); itor!=vi.end(); ++itor)
    {
        printf("%d",*itor);

        ++itor;
        if (itor!=vi.end())
        {
            printf("--->");
        }
        --itor;
    }

    printf("\n");
}

int main()
{
    int cnt = 0;
    int n = 0;

    while(scanf("%d",&n)!=EOF)
    {
        vector<int> vi;
        vi.push_back(n);
        cnt = 0;

        while(!IsF(n))
        {
            n = AddF(n);
            vi.push_back(n);
            ++cnt;
        }

        PrintVec(vi);
    }

    return 0;
}
