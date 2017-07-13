#include <stdio.h>
#include <string.h>

struct value_cnt
{
    char value;
    int icnt;
};

static void f(char* sz)
{
    int icnt = 0;
    int i = 0;
    int len = strlen(sz);
    value_cnt vc[3] = {{'Z',0},{'O',0},{'J',0}};

    for (i = 0 ; i < len ; ++i)
    {
        switch (sz[i])
        {
        case 'Z':
            ++vc[0].icnt;
            break;
        case 'O':
            ++vc[1].icnt;
            break;
        case 'J':
            ++vc[2].icnt;
            break;
        default:
            break;
        }
    }

    icnt = 0;
    while(icnt<len)
    {
        for (i = 0 ; i < 3&&(icnt<len); ++i)
        {
            if (vc[i].icnt>0)
            {
                sz[icnt++] = vc[i].value;
                vc[i].icnt--;
            }
        }
    }

    printf("%s\n",sz);
}

int main()
{
    char sz[128] = {'\0'};

    while(scanf("%s",sz)!=EOF && sz[0]!='E')
    {
        f(sz);
    }

    return 0;
}
