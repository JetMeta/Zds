#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int LEN = 'z' - 'a' + 1;
int sz[LEN] = {0};

static void display(int sz[])
{
    char c = 'a';
    int i = 0;

    for (; i<LEN; ++i,++c)
    {
        printf("%c:%d\n",c,sz[i]);
    }

    printf("\n");
}

static void f()
{
    int c;
    while((c=getchar())&&(c!=EOF))
    {
        if (c == '\n')
        {
            display(sz);
            memset(sz,0,LEN*sizeof(int));
        }
        else
        {
            if (isalpha(c))
            {
                ++sz[c-'a'];
            }
        }
    }

    //display(sz);
}

int main()
{
    f();

    return 0;
}
