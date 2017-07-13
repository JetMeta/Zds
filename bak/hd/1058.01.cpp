#include <stdlib.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

//z 使用暴力的方法生成吧

int comp(const void * a,const void * b)
{
    if (a>b)
    {
        return 1;
    }
    else
    {
        if (a == b)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int n;
    int index = 0;
    const int MAX_LEN = 5843;
    __int64 i,j,k,l;
    __int64 *pi = NULL;
    const __int64 max_humble = 2000000001;
    __int64 sum1 = 1;
    __int64 sum2 = 1;
    __int64 sum3 = 1;
    __int64 sum4 = 1;

    pi = (__int64 *)calloc(MAX_LEN,sizeof(__int64));

    for (i = 0; index < MAX_LEN&&sum1<max_humble; ++i)
    {
        if (i == 0)
        {
            sum1 = 1;
        }
        else
        {
            sum1*=7;
        }
        if (sum1<max_humble)
        {
            pi[index++]=sum1;
        }

        for(j = 0,sum2=1; index < MAX_LEN&&sum1*sum2<max_humble; ++j)
        {
            if (j == 0)
            {
                sum2 = 1;
            }
            else
            {
                sum2 *=5;
                if (sum1*sum2 <max_humble)
                {
                    pi[index++] = sum1*sum2;
                }
            }

            for (k = 0,sum3=1; index < MAX_LEN&&sum1*sum2*sum3<max_humble; ++k)
            {
                if (k == 0)
                {
                    sum3=1;
                }
                else
                {
                    sum3*=3;
                    if (sum1*sum2*sum3<max_humble)
                    {
                        pi[index++]=sum1*sum2*sum3;
                    }
                }

                for (l = 0,sum4=1 ; sum4>0&&index < MAX_LEN&&sum4<max_humble&&sum1*sum2*sum3*sum4<max_humble&&sum1*sum2*sum3*sum4>0; ++l)
                {
                    if (l = 0)
                    {
                        sum4=1;
                    }
                    else
                    {
                        sum4*=2;
                        if (sum1*sum2*sum3*sum4<max_humble)
                        {
                            pi[index++] = sum1*sum2*sum3*sum4;
                        }
                    }

                    //printf("%I64d %I64d %I64d %I64d\n",sum1,sum2,sum3,sum4);
                }
            }
        }
    }

    //qsort(pi,5843,sizeof(__int64),comp);
    sort(pi,pi+MAX_LEN);

    /*
    for (i = 0 ; i < 5842;++i)
    {
        printf("%I64d\n",pi[i]);
    }
    */

    while((scanf("%d",&n)!=EOF)&&(n!=0))
    {
        if(n%100==11||n%100==12||n%100==13||n%10>3||n%10==0)
            printf("The %dth humble number is %d.\n",n,pi[n]);
        else if(n%10==1)
            printf("The %dst humble number is %d.\n",n,pi[n]);
        else if(n%10==2)
            printf("The %dnd humble number is %d.\n",n,pi[n]);
        else if(n%10==3)
            printf("The %drd humble number is %d.\n",n,pi[n]);
    }

    return 0;
}
