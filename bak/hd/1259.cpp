#include <stdio.h>

//z Z,J,U,T,A,C,M
void InitSz(char sz[])
{
    sz[0] = 'Z';
    sz[1] = 'J';
    sz[2] = 'U';
    sz[3] = 'T';
    sz[4] = 'A';
    sz[5] = 'C';
    sz[6] = 'M';
    sz[7] = '\0';
}

void Output(char sz[])
{
    int i = 0;
    for (i = 0 ; i < 7; ++i)
    {
        if (sz[i] == 'J')
        {
            printf("%d\n",i+1);
            break;
        }
    }
}

int main()
{
    int n;
    int m;
    int i,j;
    char c = '\0';
    scanf("%d",&n);
    char sz[] = {'Z','J','U','T','A','C','M','\0'};

    while(n--)
    {
        InitSz(sz);
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d %d",&i,&j);
            c = sz[i-1];
            sz[i-1] = sz[j-1];
            sz[j-1] = c;
        }

        Output(sz);
    }

    return 0;
}
