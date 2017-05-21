#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int LEN = 100000;

int main()
{
    int len;
    char* s1=NULL;
    char* s2=NULL;
    char* s3=NULL;
    s1 = (char*)malloc(LEN+1);
    s2 = (char*)malloc(LEN+1);
    s3 = (char*)malloc(LEN*2+1);

    while(scanf("%s",s1)!=EOF)
    {
        scanf("%s",s2);
        len = strlen(s1);
        strcpy(s3,s1);
        strcat(s3,s1);

        if (strstr(s3,s2)!=NULL)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}
