#include <stdio.h>

void proc(char sz[])
{
    int i =0;
    char sa[5] = {'a','e','i','o','u'};
    int a[5] = {0};

    while(sz[i]!='\0')
    {
        switch(sz[i++])
        {
        case 'a':
            ++(a[0]);
            break;
        case 'e':
            ++(a[1]);
            break;
        case 'i':
            ++(a[2]);
            break;
        case 'o':
            ++(a[3]);
            break;
        case 'u':
            ++(a[4]);
            break;
        default:
            break;
        }
    }

    for (i = 0 ; i < 5; ++i)
    {
        printf("%c:%d\n",sa[i],a[i]);
    }
}

int main()
{
    int n ;
    char c;
    char sz[101]= {'\0'};

    scanf("%d",&n);
    while(scanf("%c",&c)&&c!='\n');

    while(n-- >0)
    {
        gets(sz);
        proc(sz);

        if (n != 0 )
        {
            printf("\n");
        }
        else
        {
        }
    }

    return 0;
}
