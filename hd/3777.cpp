#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n=0;
int page[1000] = {0};

static void process(char pagelist[])
{
    char sz[16] = {'\0'};
    char* pch = NULL;
    char* pmid=NULL;

    int i = 0;
    int low,high;
    int cnt = 0;

    pch = strtok(pagelist,",");

    while(pch!=NULL)
    {
        if ((pmid = strchr(pch,'-'))!=NULL)
        {
            memset(sz,0,16*sizeof(char));
            strncpy(sz,pch,pmid-pch);
            low = atoi(sz);
            strcpy(sz,pmid+1);
            high = atoi(sz);

            if (low < high+1)
            {
                if (low >n)
                {

                }
                else
                {
                    if (high > n)
                    {
                        high = n;
                    }

                    for (i = low ; i < high+1; ++i)
                    {
                        page[i-1] = 1;
                    }
                }
            }
        }
        else
        {
            i = atoi(pch);
            if (i<n+1)
            {
                page[i-1] = 1;
            }
        }

        pch = strtok(NULL,",");
    }

    for (i = 0 ; i < n; ++i)
    {
        if (page[i])
        {
            ++cnt;
        }
    }

    printf("%d\n",cnt);
}

int main()
{
    char pagelist[1024];

    while(scanf("%d",&n)!=EOF&&(n!=0))
    {
        memset(page,0,1000*sizeof(int));
        getchar();
        gets(pagelist);
        process(pagelist);
    }

    return 0;
}
