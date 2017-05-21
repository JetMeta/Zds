#include <stdio.h>
#include <ctype.h>
#include <map>
#include <string>

using namespace std;

//z getword

void MakeMapEmpty(map<string,int>& ms)
{
    while(!ms.empty())
    {
        ms.erase(ms.begin());
    }
}

int main()
{
    int c;
    int inword = 0 ;
    int cnt = 0;
    map<string,int> ms;
    string str("");

    while((c=getchar())!=EOF&&c!='#')
    {
        if (c=='\n')
        {
            if (str!="")
            {
                ms[str] = 1;
                str = "";
            }

            printf("%d\n",ms.size());
            cnt = 0;
            str = "";
            ms.clear();
        }

        if (isspace(c))
        {
            inword = 0;

            if (str!="")
            {
                ms[str] = 1;
                str = "";
            }
        }
        else
        {
            if (inword == 0)
            {
                inword = 1;
                ++cnt;
            }

            str += c;
        }
    }

    return 0;
}
