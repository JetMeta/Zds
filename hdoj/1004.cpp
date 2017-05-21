#include <stdio.h>
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n;
    char sz[16] = {'\0'};

    while(scanf("%d",&n)&&n!=0)
    {
        map<string,int> zmap;

        while(n-- > 0)
        {
            scanf("%s",sz);
            ++zmap[sz];
        }

        map<string,int>::iterator it;

        int imax = 0;
        string str;
        for (it = zmap.begin(); it!=zmap.end(); ++it)
        {
            if (it->second > imax)
            {
                imax = it->second;
                str = it->first;
            }
        }

        cout << str << endl;
    }

    return 0;
}
