#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
int arr[3010];

int main()
{
    int i,j,k;
    vector<int>V;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        V.clear();
        for (i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            {
                k = arr[i] + arr[j];
                V.push_back(k);
            }
        }
        sort(V.begin(),V.end());
        vector<int>::iterator iter;
        iter = V.end();
        iter --;
        printf("%d",*iter);
        iter--;
        for (i=1; i<m; i++)
        {
            printf(" %d",*iter);
            iter--;
        }
        printf("\n");
    }
    return 0;
}
