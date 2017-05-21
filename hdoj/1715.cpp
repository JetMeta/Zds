#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InvertStr(char sz[])
{
    int i=0;
    int len=0,sublen=0;
    char c='\0';

    len = strlen(sz);
    sublen = len /2 ;

    for (i = 0 ; i < sublen; ++i)
    {
        c = sz[i];
        sz[i] = sz[len-1-i];
        sz[len-1-i] = c;
    }
}

void f(char s1[],char s2[],char s3[])
{
    char * pLongStr;
    int carry=0;
    int sum=0;
    int i=0;
    int len1=0,len2=0,len3=0;

    len1 = strlen(s1);
    len2 = strlen(s2);

    len3 = len1 > len2 ? len1:len2;

    InvertStr(s1);
    InvertStr(s2);

    carry = 0;
    for (i = 0 ; i < len1 && i < len2; ++i)
    {
        sum = (s1[i] - '0' + s2[i] - '0'+carry);
        carry = sum/10;

        while(sum > 9)
        {
            sum -= 10;
        }
        s3[i] = sum + '0';
    }

    if (len1>len2)
    {
        pLongStr = s1;
    }
    else
    {
        pLongStr = s2;
    }

    if (i == len3)
    {
        if (carry)
        {
            s3[i] = carry + '0';
        }
    }
    else
    {
        while(i<len3)
        {
            sum = pLongStr[i] - '0' + carry;
            carry = sum/10;
            while(sum > 9)
            {
                sum - 10;
            }
            s3[i] = sum + '0';
            ++i;
        }
    }

    InvertStr(s1);
    InvertStr(s2);
    InvertStr(s3);
}

void Fibonacci(int n)
{
    int i = 0;
    char sz1[1200] = {'1','\0'};
    char sz2[1200] = {'1','\0'};
    char sz3[1200] = {'2','\0'};

    if (n < 3)
    {
        printf("1\n");
        return ;
    }

    if (n < 4)
    {
        printf("2\n");
        return;
    }

    for (i =3 ; i < n ; ++i)
    {
        f(sz2,sz3,sz1);
        strcpy(sz2,sz3);
        strcpy(sz3,sz1);
    }

    printf("%s\n",sz1);
}

int main()
{
    int n;
    int m;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        Fibonacci(m);
    }

    return 0;
}
