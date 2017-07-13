#include <cstdio>
#include <cstdlib>

int cnt = 1;

int comp(const void* a,const void* b)
{
    return *(int*)a - *(int*)b;
}

void Triangle(int a,int b,int c)
{
    int i = 0;
    int sz[3] = {a,b,c};
    qsort(sz,3,sizeof(int),comp);

    /*
    for (i = 0 ; i < 3;++i)
    {
        printf("%d\t",sz[i]);
    }
    printf("\n");
    */

    int res = sz[0]*sz[0] + sz[1]*sz[1] - sz[2]*sz[2];
    if (res == 0)
    {
        printf("Case %d: Right triangle\n",cnt);
    }
    else
    {
        if (res > 0)
        {
            printf("Case %d: Acute triangle\n",cnt);
        }
        else
        {
            printf("Case %d: Obtuse triangle\n",cnt);
        }
    }
    ++cnt;
}

int main()
{
    int i = 0;
    int n = 0;
    int a,b,c;

    scanf("%d",&n);
    for (i = 0 ; i < n ; ++i)
    {
        scanf("%d%d%d",&a,&b,&c);
        Triangle(a,b,c);
    }

    return 0;
}
