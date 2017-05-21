#include <stdio.h>
#include <string.h>

void InvertStr(char sz[])
{
    int i;
    int len;
    char c;

    len = strlen(sz);

    for (i = 0 ; i < len/2; ++i)
    {
        c = sz[i];
        sz[i] = sz[len-1-i];
        sz[len-1-i] = c;
    }
}

void f(char s1[],char s2[],char s3[],int n)
{
    char * pLongStr;
    int carry;
    int sum;
    int i;
    int len1,len2;

    len1 = strlen(s1);
    len2 = strlen(s2);

    InvertStr(s1);
    InvertStr(s2);

    carry = 0;
    for (i = 0 ; i < (int)strlen(s1) && i < (int)strlen(s2); ++i)
    {
        sum = (s1[i] - '0' + s2[i] - '0'+carry);
        carry = sum/10;
        sum %=10;
        s3[i] = sum + '0';
    }

    if (strlen(s1)>strlen(s2))
    {
        pLongStr = s1;
    }
    else
    {
        pLongStr = s2;
    }

    while(i<(int)strlen(pLongStr))
    {
        sum = pLongStr[i] - '0' + carry;
        carry = sum/10;
        sum%=10;
        s3[i] = sum + '0';
        ++i;
    }

    InvertStr(s1);
    InvertStr(s2);
    InvertStr(s3);

    printf("Case %d:\n",n);
    len1 = strlen(s1);
    printf("%s + %s = %s\n",s1,s2,s3);
}

int main()
{
    int n =0;
    int i = 0;
    int icnt = 0;
    char sz1[1200] = {'\0'};
    char sz2[1200] = {'\0'};
    char sz3[1200] = {'\0'};

    scanf("%d",&n);
    //while(scanf("%c",&c)&&c!='\n');

    while (n-- > 0)
    {
        memset(sz1,'\0',1200);
        memset(sz2,'\0',1200);
        memset(sz3,'\0',1200);

        icnt++;
        scanf("%s",sz1);
        scanf("%s",sz2);
        f(sz1,sz2,sz3,icnt);
        if (n!=0)
        {
            printf("\n");
        }
    }

    return 0;
}
