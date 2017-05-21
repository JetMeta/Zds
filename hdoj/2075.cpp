#include <stdio.h>

int main()
{
    int n;
    __int64 s,t;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%I64d %I64d",&s,&t);
        if (s%t == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
