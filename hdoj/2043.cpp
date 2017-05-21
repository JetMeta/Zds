#include <stdio.h>
#include <ctype.h>
#include <string.h>

static bool isFourthGroup(char c)
{
    //~,!,@,#,$,%,^
    if (c == '~'||c=='!'||c=='@'||c=='#'||c=='$'||c=='%'||c=='^')
    {
        return true;
    }

    return false;
}

static int sum(int sz[],int len)
{
    int i = 0;
    int res = 0;

    for (i = 0 ; i < len ; ++i)
    {
        res +=sz[i];
    }

    return res;
}

static void f(char str[])
{
    int i =0;
    bool isSafe = false;
    int sz[4] = {0};

    int len = strlen(str);
    if (len < 8 || len>16)
    {
        printf("NO\n");
        return ;
    }


    for (i = 0 ; i < len ; ++i)
    {
        if (isalpha(str[i]))
        {
            if (isupper(str[i]))
            {
                sz[0] = 1;
            }
            else
            {
                sz[1] = 1;
            }
        }

        if (isdigit(str[i]))
        {
            sz[2] = 1;
        }

        if (isFourthGroup(str[i]))
        {
            sz[3] = 1;
        }

        if (sum(sz,4)>2)
        {
            printf("YES\n");
            return;
        }
    }

    printf("NO\n");
    return ;
}

int main()
{
    int n;
    char str[51] = {'\0'};

    scanf("%d",&n);
    while(n--)
    {
        memset(str,'\0',sizeof(str));
        scanf("%s",str);
        // printf("%s\n",str);
        f(str);
    }

    return 0;
}
