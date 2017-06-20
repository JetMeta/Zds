#include <stdio.h>
#include <stack>

using namespace std;

static int sumf(int n,int base)
{
    int r=0;
    int sum = 0;
    stack<int> si;

    while(n>0)
    {
        r = n%base;
        n/=base;
        si.push(r);
    }

    while(!si.empty())
    {
        r = si.top();
        sum+=r;
        si.pop();
    }

    return sum;
}

static void f(const int n)
{
    if (sumf(n,10) == sumf(n,16)&&sumf(n,10)==sumf(n,12))
    {
        printf("%d\n",n);
    }
}

int main()
{
    int i = 2992;
    for (; i<10000; ++i)
    {
        f(i);
    }

    return 0;
}
