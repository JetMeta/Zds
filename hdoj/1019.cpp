#include <stdio.h>
#include <stdlib.h>

__int64 gcd(__int64 m,__int64 n)
{
    if(m<n)
    {
        m^=n;
        n^=m;
        m^=n;
    }

    while(m - n > 0)
    {
        m -= n;
    }

    if(m==n)
        return n;

    return gcd(n,m);
}

__int64 get_lcm(__int64* psz,__int64 len)
{
    if (len == 1)
    {
        return *psz;
    }

    __int64 m = get_lcm(psz,len/2);
    __int64 n = get_lcm(psz+len/2,len-len/2);

    return m*n/gcd(m,n);

    /*
    int i = 0;
    int lcm = psz[0];

    for (i = 0 ; i < len ; ++i)
    {
        lcm = lcm*psz[i]/gcd(psz[i],lcm);
    }

    return lcm;
    */
}

__int64 gcd_sz(int *psz,int len)
{
    if(len==1)
        return *psz;

    return gcd(psz[len-1],gcd_sz(psz,len-1));
}

__int64 GetLCM(__int64 m,__int64 n)
{
    return m*n/gcd(m,n);
}

__int64 GetNLCM(__int64 *arr, int len)
{
    if(len==1)
        return *arr;
    return GetLCM(arr[len-1],GetNLCM(arr,len-1));
}

int main()
{
    int n,m,t;
    __int64* psz = NULL;
    int icnt = 0;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);

        icnt = 0;
        psz = (__int64 *)malloc(m*sizeof(__int64));
        while(m--)
        {
            scanf("%d",&t);
            psz[icnt++] = t;
        }

        printf("%d\n",GetNLCM(psz,icnt));

        free(psz);
        psz = NULL;
    }

    return 0;
}
