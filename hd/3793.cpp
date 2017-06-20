#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef bool func(char*,int,int);

static bool f2(char* digi,int len,int index)
{
    int i,j;
    i = index ;
    j = index + 1;

    while((i >= 0) && (j < len))
    {
        if (digi[i] == digi[j])
        {
            --i;
            ++j;
        }
        else
        {
            return false;
        }
    }

    if ((i == 0)&& (j == len - 1))
    {
        return true;
    }

    if (i == -1)
    {
        i = len -1;
        index = (j+i)/2+1;
        while(j < index)
        {
            if (digi[i] == digi[j])
            {
                ++j;
                --i;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        j = 0;
        index = (i+j)/2+1;

        while(j < index)
        {
            if (digi[i] == digi[j])
            {
                ++j;
                --i;
            }
            else
            {
                return false;
            }
        }
    }

    return true;
}

static bool f(char* digi,int len,int index)
{
    int i,j;
    bool isSym = true;
    i = index;
    j = index;

    while((i>=0) && (j < len) )
    {

        if (digi[i] == digi[j])
        {
            --i;
            ++j;
        }
        else
        {
            return false;
        }
    }

    if ((i == -1) && (j == len))
    {
        return true;
    }

    if (i == -1)
    {
        i = len -1;
        index = (j+i)/2+1;
        while(j < index)
        {
            if (digi[i] == digi[j])
            {
                ++j;
                --i;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        j = 0;
        index = (i+j)/2+1;

        while(j < index)
        {
            if (digi[i] == digi[j])
            {
                ++j;
                --i;
            }
            else
            {
                return false;
            }
        }
    }

    return true;
}

static void isSymmetric(char* digi)
{
    int i = 0;
    int len = strlen(digi);

    func* fzz;
    if (len&1)
    {
        fzz = f;
    }
    else
    {
        fzz =f2;
    }

    for (i = 0 ; i < len ; ++i)
    {
        if (fzz(digi,len,i))
        {
            printf("YES %d\n",i);
            return;
        }
    }

    printf("NO\n");
}

int main()
{
    char digi[1024] = {'\0'};

    while((scanf("%s",digi)!=EOF&&(digi[0]!='#')))
    {
        isSymmetric(digi);
    }

    return 0;
}
