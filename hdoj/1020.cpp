#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void f(char* psz)
{
    int i =0;
    int j = 0;
    int icnt = 0;
    int len = strlen(psz);
    char num[6]= {'\0'};
    char * plz = (char*)malloc(len*sizeof(char)+1);
    memset(plz,'\0',len+1);

    while(psz[i]!='\0')
    {
        icnt = 1;

        while (psz[i+1]!='\0'&&psz[i]==psz[i+1])
        {
            ++i;
            ++icnt;
        }

        if (icnt == 1)
        {
            plz[j++] = psz[i++];
        }
        else
        {
            sprintf(num,"%d",icnt);
            strcpy(&plz[j],num);
            j+=strlen(num);
            plz[j++] = psz[i++];
        }
    }

    printf("%s\n",plz);
    free(plz);
}

int main()
{
    int n = 0;
    char* psz = (char*)malloc(10000*sizeof(char));
    memset(psz,'\0',10000);

    scanf("%d",&n);
    gets(psz);
    while (n-- > 0)
    {
        gets(psz);
        f(psz);
    }

    free(psz);
    return 0;
}
