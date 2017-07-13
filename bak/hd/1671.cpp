#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

typedef vector<string> vs;
typedef vs::iterator vsi;

static int f(vs& zvs)
{
    int ipos=0;
    vsi iter;
    vsi iter2;

    for (iter = zvs.begin(); iter!=zvs.end(); ++iter)
    {
        iter2 = ++iter;

        if (iter2 == zvs.end())
        {
            break;
        }

        --iter;

        //for (;iter2!=zvs.end();++iter2)
        {
            if (((*iter2).data())[0]==((*iter).data())[0])
            {
                if ((ipos=(*iter2).find(*iter))!=string::npos && ipos==0)
                {
                    printf("NO\n");
                    return 0;
                }

                //break;
            }
            else
            {
                //break;
            }
        }
    }

    printf("YES\n");
    return 1;
}

int main()
{
    int n;
    int m;
    int c;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        scanf("%c",&c);

        string str;
        vs zvs;
        while(m--)
        {
            getline(cin,str);
            zvs.push_back(str);
        }

        sort(zvs.begin(),zvs.end());
        f(zvs);
    }

    return 0;
}
