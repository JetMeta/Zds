#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

void procStr(char sz[])
{
    int i = 0;
    char abrev[128] = {'\0'};
    char* pc = sz;

    while(*pc!='\0')
    {
        while( *pc == ' '&&*pc!='\0')
        {
            ++pc;
        }

        abrev[i++] = toupper(*pc);

        while(*pc!=' '&&*pc!='\0')
        {
            ++pc;
        }
    }

    printf("%s\n",abrev);
}

int main()
{
    int n;
    char c;
    char sz[1024] = {'\0'};
    string str;

    scanf("%d",&n);
    while(scanf("%c",&c)&&c!='\n');

    while(n--)
    {
        gets(sz);
        procStr(sz);
    }

    return 0;
}
