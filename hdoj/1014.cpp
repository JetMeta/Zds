#include <stdio.h>
#include <set>
#include <vector>

using namespace std;

int f(int step,int mod)
{
    int i = 0;
    int seed0 = 1;
    int seed1 = 0;
    set<int> si;

    /*
    while(step > mod){
        step -=mod;
    }
    */

    for(i = 0 ; i < mod+1; ++i)
    {
        seed1 = (seed0 + step)%mod;
        /*
        seed1 = seed0 + step;
        while(seed1>mod){
            seed1 -= mod;
        }
        */

        seed0 = seed1;
        si.insert(seed1);
    }

    if ((int)si.size() == mod)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int f2(int step,int mod)
{
    int i = 0;
    int seed0 = 1;
    int seed1 = 0;
    int icnt = 0;

    for(i = 0 ; i < mod+1; ++i)
    {
        seed1 = (seed0 + step)%mod;
        seed0 = seed1;
        ++icnt;
        if (seed0 == 1)
        {
            break;
        }
    }

    if (icnt == mod)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int step,mod;

    while(scanf("%d %d",&step,&mod)!=EOF)
    {
        if (f2(step,mod))
        {
            printf("%10d%10d    Good Choice\n",step,mod);
        }
        else
        {
            printf("%10d%10d    Bad Choice\n",step,mod);
        }

        printf("\n");
    }

    return 0;
}
