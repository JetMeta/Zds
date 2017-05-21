#include <cstdio>
#include <string>
#include <map>

using namespace std;

void InitMarkMap(map<string,double>& po_opMap)
{
    po_opMap["A"]=4.0;
    po_opMap["A-"]=3.7;
    po_opMap["B+"]=3.3;
    po_opMap["B"]=3.0;
    po_opMap["B-"]=2.7;
    po_opMap["C+"]=2.3;
    po_opMap["C"]=2.0;
    po_opMap["C-"]=1.7;
    po_opMap["D"]=1.3;
    po_opMap["D-"]=1.0;
    po_opMap["F"]=0.0;
}

int main()
{
    int n=0;
    char tmp[16];
    string s;

    map<string,double> map;
    InitMarkMap(map);

    while(scanf("%d",&n)!=EOF&& n!=0)
    {
        double fTotalMark = 0.0;
        int nTotalCnt = 0;
        while(n--)
        {
            int m=0;
            scanf("%d %15s",&m,tmp);

            s = tmp;

            if(map.find(s)!=map.end())
            {
                fTotalMark += m*map[s];
                nTotalCnt += m;
            }
        }

        if(nTotalCnt > 0 )
        {
            printf("%.2f\n",fTotalMark/nTotalCnt);
        }
        else
        {
            printf("0.00\n");
        }
    }

    return 0;
}
