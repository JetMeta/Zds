#include <stdio.h>
#include <string.h>

static void f(char sz[])
{
    char c;
    int i = 0;
    int len = strlen(sz);

    for (i = 0 ; i < len ; i+=2)
    {
        c = sz[i];
        sz[i] = sz[i+1];
        sz[i+1] = c;
    }

    printf("%s\n",sz);
}

int main()
{
    int n;
    char sz[64] = {'\0'};

    scanf("%d",&n);

    while(n--)
    {
        scanf("%s",sz);
        f(sz);
    }

    return 0;
}
