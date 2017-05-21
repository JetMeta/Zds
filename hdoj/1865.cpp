#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void add(char s1[],char s2[],char s3[])
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

    if (i == (int)strlen(pLongStr))
    {
        if (carry)
        {
            s3[i] = carry + '0';
        }
    }
    else
    {
        while(i<(int)strlen(pLongStr))
        {
            sum = pLongStr[i] - '0' + carry;
            carry = sum/10;
            sum%=10;
            s3[i] = sum + '0';
            ++i;
        }
    }

    InvertStr(s1);
    InvertStr(s2);
    InvertStr(s3);
}

int k(int n)
{
    if ( n < 4)
    {
        return n;
    }

    return k(n-1)+k(n-2);
}

void sub_f(int n)
{
    printf("%d\n",n);
}

void f(int n)
{
    int i = 0;
    char s1[1024] = {'1','\0'};
    char s2[1024] = {'2','\0'};
    char s3[1024] = {'3','\0'};

    if (n < 4)
    {
        sub_f(n);
        return;
    }

    for (i = 3; i < n ; ++i)
    {
        add(s2,s3,s1);
        strcpy(s2,s3);
        strcpy(s3,s1);
    }

    printf("%s\n",s1);
}

int main()
{
    int n;
    int len = 0;
    char sz[256] = {'\0'};

    gets(sz);
    n = atoi(sz);
    while(n-- > 0)
    {
        memset(sz,'\0',256);
        gets(sz);
        len = strlen(sz);
        f(len);
    }

    return 0;
}
