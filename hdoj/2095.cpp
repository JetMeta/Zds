#include <cstdio>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

class funcObj
{
public:
    void operator()(pair<int,int> elem)
    {
        if (elem.second == 1)
        {
            cout << elem.first<<endl;
        }
    }
};

int main()
{
    int n = 0;
    int temp;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        map<int,int> zmap;

        while(n--)
        {
            scanf("%d",&temp);
            ++zmap[temp];
        }

        for_each(zmap.begin(),zmap.end(),funcObj());
    }

    return 0;
}
