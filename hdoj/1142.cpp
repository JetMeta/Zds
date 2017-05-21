//z Fri Jan 14 11:37:26 2011
#include <iostream>
#include <algorithm>
using namespace std;

int length[1010][1010];
int dist[1010], sum[1010];

struct node
{
    int lth;
    int x;
} code[1010];

bool cmp(node a, node b)
{
    return a.lth < b.lth;
}

const int maxint = 0x7fffffff;

void Dijkstra(int a, int n)
{
    int i, j, u;
    bool s[1010];

    for(i = 1; i <= n; i++)
    {
        dist[i] = length[a][i];
        s[i] = false;
    }

    dist[a] = 0;
    s[a] = true;

    for(i = 1; i < n; i++)
    {
        int min = maxint;
        for(j = 1; j <= n; j++)
        {
            if(s[j] == false && (dist[j] < min))
            {
                min = dist[j];
                u = j;
            }
        }
        if(min == maxint)
        {
            break;
        }
        s[u] = true;
        for(j = 1; j <= n; j++)
        {
            if(s[j] == false && length[u][j] < maxint && min + length[u][j] < dist[j])
            {
                dist[j] = min + length[u][j];
            }
        }
    }
}

int main()
{
    int n, m, i, j, a, b, len;

    //z 判断是否出现了内容为0的行数
    //z 如非，读入的是顶点的数目
    while (scanf("%d", &n) == 1 && n)
    {
        memset(length, 0, sizeof(length));
        memset(dist, 0, sizeof(dist));
        memset(sum, 0, sizeof(sum));

        //z 读入边数
        scanf("%d", &m);
        //z 初始化邻接矩阵
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                length[i][j] = maxint;
            }
        }

        //z 读入边和边距
        for (i = 0; i < m; i++)
        {
            scanf("%d %d %d", &a, &b, &len);
            length[a][b] = len;
            length[b][a] = len;
        }

        Dijkstra(2, n);
        for (i = 1; i <= n; i++)
        {
            code[i].lth = dist[i];
            code[i].x   = i;
        }

        sort (code + 1, code + n + 1, cmp);
        for (i = 1; i <= n; i++)
        {
            if (length[code[i].x][2] != maxint)
            {
                sum[i]++;
            }

            for (j = 1; j < i; j++)
            {
                if (length[code[i].x][code[j].x] != maxint && code[i].lth > code[j].lth)
                {
                    sum[i] += sum[j];
                }
            }

            if (code[i].x == 1)
            {
                printf("%d\n", sum[i]);
                break;
            }
        }
    }

    return 0;
}
