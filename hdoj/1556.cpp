#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>

using namespace std;

const int maxn=100000+1;

int n;

#define left(x) ((x)<<1)
#define right(x) (((x)<<1)+1)
#define mid(x, y) ((x+y)>>1)

struct Seg_Tree
{
    int left, right;
    int cnt;
    bool mark;
} mat[maxn<<2];

void Build_Tree(int left,int right,int index)
{
    mat[index].left=left;
    mat[index].right=right;
    mat[index].cnt=0;
    mat[index].mark=false;

    if(left==right)return;

    Build_Tree(left, mid(left, right), left(index));
    Build_Tree(1+mid(left, right), right, right(index));
}

void Update_Tree(int left,int right,int index)
{
    if(left==mat[index].left && right==mat[index].right)
    {
        ++mat[index].cnt;
        mat[index].mark=true;
        //printf("%d==%d (%d)\n", left, right, mat[index].cnt);
        return;
    }

    //z 将其cnt下放哈
    //z 也就是说cnt总是分布在边缘部分
    if(mat[index].mark)
    {
        mat[left(index)].mark=mat[right(index)].mark=true;
        mat[left(index)].cnt+=mat[index].cnt;
        mat[right(index)].cnt+=mat[index].cnt;

        mat[index].cnt=0;
        mat[index].mark=false;
    }

    int m=mid(mat[index].left, mat[index].right);
    if(right <= m)Update_Tree(left, right, left(index));
    else if(left > m)Update_Tree(left, right, right(index));
    else
    {
        Update_Tree(left, m, left(index));
        Update_Tree(1+m, right, right(index));
    }
}

int Query_Tree(int left,int right,int index)
{
    if(mat[index].left==mat[index].right)return mat[index].cnt;

    if(mat[index].mark)
    {
        mat[left(index)].mark=mat[right(index)].mark=true;
        mat[left(index)].cnt+=mat[index].cnt;
        mat[right(index)].cnt+=mat[index].cnt;

        mat[index].cnt=0;
        mat[index].mark=false;
    }

    int m=mid(mat[index].left, mat[index].right);
    if(right <= m)return Query_Tree(left, right, left(index));
    return Query_Tree(left, right, right(index));
}

int main()
{
    int i;
    int x, y;
    while(scanf("%d", &n)==1 && n)
    {
        Build_Tree(1, n, 1);
        for(i=0; i<n; ++i)
        {
            scanf("%d%d", &x, &y);
            if(x>y)x^=y^=x^=y;
            Update_Tree(x, y, 1);
        }

        for(i=1; i<=n; ++i)
        {
            if(i==1)printf("%d", Query_Tree(i, i, 1));
            else printf(" %d", Query_Tree(i, i, 1));
        }
        puts("");
    }
    return 0;
}
