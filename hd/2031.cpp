//z ½øÖÆ×ª»»
#include <stdio.h>
#include <stack>

using namespace std;

void f(int m,int n)
{
    int i =0;
    int flag = 0;
    stack<char> si;
    char sz[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    if (m < 0)
    {
        m = -m;
        flag = 1;
    }

    while(m>0)
    {
        i = m%n;
        si.push(sz[i]);
        m /= n;
    }

    if (flag)
    {
        printf("-");
    }

    while(!si.empty())
    {
        i = si.top();
        printf("%c",i);
        si.pop();
    }
}

int main()
{
    int m,n;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        f(m,n);
        printf("\n");
    }

    return 0;
}
