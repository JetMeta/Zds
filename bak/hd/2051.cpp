#include <cstdio>
#include <stack>

using namespace std;

void f(int n)
{
    stack<int> vi;

    while(n > 0)
    {
        vi.push(n%2);
        n/=2;
    }

    while(!vi.empty())
    {
        printf("%d",vi.top());
        vi.pop();
    }

    printf("\n");
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        f(n);
    }

    return 0;
}
