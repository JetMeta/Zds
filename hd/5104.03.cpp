﻿#include <cmath>
#include <cstdio>
//#include <cstdlib>

#include <vector>
#include <map>

using namespace std;

void getPrimeTable(const int nNum, vector<int>& rPrimeVec, map<int, bool>& rPrimeMap)
{
    const int nLimition = nNum + 1;
    const int nRoot = (int)sqrt((double)nNum) + 2;
    int nPrimeCnt = 0;
    vector<bool> vb(nLimition,false);
    vb[0] = vb[1] = true;

    int i = 0, j = 0;
    nPrimeCnt = 2;
    for (i = 2; i < nRoot; ++i)
    {
        if (!vb[i])
        {
            for (j = i * i; j < nLimition; j += i)
            {
                if (!vb[j])
                {
                    vb[j] = true;
                    ++nPrimeCnt;
                }
            }
            // printf("%d\n", i);
        }
    }

    nPrimeCnt = nLimition - nPrimeCnt;
    //printf("%d,%d\n", nPrimeCnt, nLimition - nPrimeCnt);

    rPrimeVec.reserve(nPrimeCnt);

    for (i = 2; i < nLimition; i++)
    {
        if (!vb[i])
        {
            ++nPrimeCnt;
            rPrimeVec.push_back(i);
            rPrimeMap[i] = true;
        }
    }
    //z printf("%d\n", nPrimeCnt);
}

int calcSumCnt(const int nNum, const vector<int>& rV, const map<int, bool>& rM)
{
    const int nHalf = nNum / 2 + 1;
    const int nOneThird = nNum / 3 + 1;
    int nCnt = 0;

    int i = 0, j = 0;

    if ((nNum % 2) == 0)
    {
        for (j = 1; rV[j] < nHalf && (rV[j] <= (nNum - (2 + rV[j]))); ++j)
        {
            if (rM.find(nNum - (2 + rV[j])) != rM.end())
            {
                ++nCnt;

                // printf("%d,%d,%d\n", rV[i], rV[j], nNum - (rV[i] + rV[j]));
            }
        }
    }
    else
    {
        for (i = 0; rV[i] < nOneThird; ++i)
        {
            for (j = i; rV[j] < nHalf && (rV[j] <= nNum - (rV[i] + rV[j])); ++j)
            {
                if (rM.find(nNum - (rV[i] + rV[j])) != rM.end())
                {
                    ++nCnt;

                    // printf("%d,%d,%d\n", rV[i], rV[j], nNum - (rV[i] + rV[j]));
                }
            }
        }
    }

    return nCnt;
}

int main()
{
    vector<int> vecPrime;
    map<int, bool> mapPrime;
    getPrimeTable(10000,vecPrime,mapPrime);

    int nNum = 0;

    while (scanf("%d",&nNum)!=EOF && nNum > 0)
    {
        printf("%d\n", calcSumCnt(nNum,vecPrime,mapPrime));
    }

    /*for (int i = 0; i < 10001; i++)
    {
        printf("%5d : %d\n", i, calcSumCnt(i, vecPrime, mapPrime));
    }*/

    // calcSumCnt(1819, vecPrime, mapPrime);

    return 0;
}
