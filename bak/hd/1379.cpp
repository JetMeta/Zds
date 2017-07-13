#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> pii;
typedef vector<pii>::iterator pii_itor;

struct IntLess
{
    bool operator()(pii left, pii right) const
    {
        return (left.second < right.second);
    };
};

int countStr(string& str)
{
    int i = 0;
    int j = 0;
    int cnt = 0;
    int len = str.length();

    for (i = 0 ; i < len ; ++i)
    {
        for (j = i+1 ; j < len ; ++j)
        {
            if (str[i] > str[j])
            {
                ++cnt;
            }
        }
    }

    return cnt;
}

int countStr2(string& str)
{
    int i;
    int cnt = 0;
    int a[4] = {0};
    int len = str.length();

    for(i = len - 1; i >= 0; i--)
    {
        switch (str[i])
        {
        case 'A':
            a[1]++;
            a[2]++;
            a[3]++;
            break;
        case 'C':
            a[2]++;
            a[3]++;
            cnt += a[1];
            break;
        case 'G':
            a[3]++;
            cnt += a[2];
            break;
        case 'T':
            cnt += a[3];
        }
    }

    return cnt;
}

int count_inver(char *str, int len)
{
    int i;
    int cnt = 0;
    int a[4] = {0};
    for(i = len - 1; i >= 0; i--)
    {
        switch (str[i])
        {
        case 'A':
            a[1]++;
            a[2]++;
            a[3]++;
            break;
        case 'C':
            a[2]++;
            a[3]++;
            cnt += a[1];
            break;
        case 'G':
            a[3]++;
            cnt += a[2];
            break;
        case 'T':
            cnt += a[3];
        }
    }
    return cnt;
}

int countStr2(char *str, int len)
{
    int i;
    int cnt = 0;
    int a[4] = {0};
    for(i = len - 1; i >= 0; i--)
    {
        switch (str[i])
        {
        case 'A':
            a[1]++;
            a[2]++;
            a[3]++;
            break;
        case 'C':
            a[2]++;
            a[3]++;
            cnt += a[1];
            break;
        case 'G':
            a[3]++;
            cnt += a[2];
            break;
        case 'T':
            cnt += a[3];
        }
    }
    return cnt;
}

int main()
{
    int k;

    scanf("%d",&k);

    while(k--)
    {
        int i = 0;
        int n = 0;
        int len = 0;
        string str;
        vector<pii> ve;
        map<int,string> vm;

        scanf("%d %d",&len,&n);

        while(i++ < n)
        {
            cin >> str;
            vm[i] = str;
            pii pn = pair<int,int>(i,0);
            pn.second = countStr2(str);
            ve.push_back(pn);
        }

        IntLess fless;
        stable_sort(ve.begin(),ve.end(),fless);

        for (pii_itor pit = ve.begin(); pit!=ve.end(); ++pit)
        {
            //pii pm = *pit;
            //cout << pm.first << "  " << pm.second << endl;
            cout << vm[pit->first] << endl;
        }

        if (k!=0)
        {
            printf("\n");
        }
    }

    return 0;
}
