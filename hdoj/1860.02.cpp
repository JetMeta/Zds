#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

char s1[5],s2[80];
int ch[256];

int main()
{
    int i = 0;
    while(gets(s1)&&strcmp(s1, "#"))
    {
        gets(s2);
        memset(ch,0,sizeof(ch));
        for(i=0; i<strlen(s2); ++i)
            ch[s2[i]]++;
        for(i=0; i<strlen(s1); ++i)
            cout<<s1[i]<<" "<<ch[s1[i]]<<endl;
    }
    return 0;
}
