#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//z 共n个人，在m项目上有意见，挑出最大的k项

struct grade
{
    int id;
    float val;
};

const float epsion = 1e-10;

int comp_int(const void * p1,const void * p2)
{
    return *(int *)p2 - *(int *)p1;
}

int comp_int2(const void * p1,const void * p2)
{
    return (*(grade*)p1).id > (*(grade*)p2).id ? -1 : 1;
}

int comp(const void *p1,const void *p2)
{
    float r = (*(grade*)p1).val - (*(grade*)p2).val;

    if (r > epsion)
    {
        return -1;
    }
    else
    {
        if (r < -epsion)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}

/*
//按照x从小到大排序，当x相等时按照y从大到小排序
int cmp( const void *a , const void *b )
{
    struct In *c = (In *)a;
    struct In *d = (In *)b;
    if(c->x != d->x) return c->x - d->x;
    else return d->y - c->y;
}
*/

int comp_float(const void *p1,const void *p2)
{
    return (*(grade*)p1).val > (*(grade*)p2).val ? -1 : 1;
}

int main()
{
    grade * psz = NULL;
    float f;
    int n=0,m=0,k=0;
    int i=0,j=0;

    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
    {
        psz = (grade *)malloc(m*sizeof(grade));
        memset(psz,'0',m*sizeof(grade));

        for (i = 0 ; i < n ; ++i)
        {
            for (j = 0 ; j < m ; ++j)
            {
                psz[j].id = j+1;
                scanf("%f",&f);
                psz[j].val +=f;
            }
        }

        qsort(psz,m,sizeof(psz[0]),comp_float);
        qsort(psz,k,sizeof(psz[0]),comp_int2);

        for (i = 0 ; i < k ; ++i)
        {
            if (i == k-1)
            {
                printf("%d\n",psz[i].id);
            }
            else
            {
                printf("%d ",psz[i].id);
            }

        }

        free(psz);
    }

    return 0;
}
