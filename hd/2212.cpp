#include <stdio.h>
#include <vector>

using namespace std;

vector<int> vi;

int res[10];

static void f()
{
    int sum = 1;
    int i ;

    res[0] = 1;
    res[1] = 1;

    for (i = 2; i < 10 ; ++i)
    {
        res[i]=res[i-1]*i;
    }
}

static bool isEqual(int n)
{
    int i = 0;
    int val = n;
    int sum = 0;

    while(val>0)
    {
        i = val %10;
        sum+=res[i];
        val /=10;
    }

    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//z 40586

int main()
{
    int i = 0;
    f();

    for (i = 1; i < 10*res[9] ; ++i)
    {
        if (isEqual(i))
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
