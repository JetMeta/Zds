#include <stdio.h>
#include <map>

using namespace std;

int main()
{
    char c;
    int i = 0;
    char sz1[6] = {'\0'};
    char sz2[81] = {'\0'};

    gets(sz1);
    while(sz1[0]!='#')
    {
        map<char,int> zmap;
        gets(sz2);

        char* psz1 = sz1;
        char* psz2 = sz2;
        while(*psz1!='\0')
        {
            zmap[*psz1]=0;
            ++psz1;
        }

        while(*psz2!='\0')
        {
            zmap[*psz2]++;
            ++psz2;
        }

        psz1 = sz1;
        while(*psz1!='\0')
        {
            printf("%c %d\n",*psz1,zmap[*psz1]);
            ++psz1;
        }

        gets(sz1);
    }

    return 0;
}
