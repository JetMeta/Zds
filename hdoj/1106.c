#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void * p1,const void * p2)
{
    return *(int*)p1 - *(int*)p2;
}

void f(char sz[])
{
    int i = 0;
    int icnt=0;
    int isz[1024] = {0};
    int len = strlen(sz);

    int iFlag = 0;
    int r = 0;
    int t = 0;

    while(sz[i]!='\0')
    {
        r = 0;
        t = 0;
        iFlag = 0;

        while(sz[i]=='5'&&sz[i]!='\0')
        {
            ++i;
        }

        while(sz[i]!='5'&&sz[i]!='\0')
        {
            iFlag = 1;
            t = sz[i] - '0';
            r*=10;
            r+=t;
            ++i;
        }

        if (iFlag)
        {
            isz[icnt] = r;
            ++icnt;
        }
    }

    qsort(isz,icnt,sizeof(int),comp);

    for (i = 0 ; i < icnt; ++i)
    {
        if (i == icnt -1)
        {
            printf("%d\n",isz[i]);
        }
        else
        {
            printf("%d ",isz[i]);
        }
    }
}

int main()
{
    char sz[1024] = {'\0'};

    while(gets(sz)!=NULL)
    {
        f(sz);
    }

    return 0;
}
