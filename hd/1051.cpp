#include <stdio.h>
#include <stdlib.h>

struct stick
{
    bool bHandle;
    int l;
    int w;

    stick(int _l=0,int _w=0):l(_l),w(_w),bHandle(false) {}
};

int comp(const void * a_,const void * b_)
{
    //z 第一次只考虑了w这个顺序，这样是不对的。。。
    //return (*(stick*)a).w - (*(stick*)b).w;
    stick a = (*(stick*)a_);
    stick b = (*(stick*)b_);

    if (a.w>b.w)
    {
        return 1;
    }
    else
    {
        if (a.w<b.w)
        {
            return -1;
        }
        else
        {
            return a.l - b.l;
        }
    }
}

int main()
{
    int t;
    int n;
    int i;
    int icnt = 0;
    int handle = 0;
    stick sz[5000];

    scanf("%d",&t);

    while(t--)
    {
        icnt = 0;
        handle = 0;
        scanf("%d",&n);

        for (i = 0 ; i < n ; ++i)
        {
            scanf("%d%d",&sz[i].l,&sz[i].w);
            sz[i].bHandle = false;
        }

        qsort(sz,n,sizeof(stick),comp);

        while (handle!=n)
        {
            ++icnt;
            int lcomp = 0;
            for (i = 0 ; i < n ; ++i)
            {
                if (!sz[i].bHandle)
                {
                    break;
                }
            }

            if (i!=n)
            {
                lcomp = sz[i].l;
                sz[i].bHandle = true;
                ++handle;
            }

            for (i = i + 1; (i < n)&&(handle!=n) ; ++i)
            {
                if ((!sz[i].bHandle)&&(sz[i].l>=lcomp))
                {
                    lcomp = sz[i].l;
                    sz[i].bHandle = true;
                    ++handle;
                }
            }
        }

        printf("%d\n",icnt);
    }

    return 0;
}
