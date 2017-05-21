#include <cctype>
#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

const string delims(" \t");

void revert_str(string& str,int n)
{
    int i = 0;
    string::size_type begIdx,endIdx;

    begIdx = str.find_first_not_of(delims);

    for (i = 0 ; i < (int)begIdx ; ++i)
    {
        cout << str[i];
    }

    while(begIdx!=string::npos)
    {
        endIdx = str.find_first_of(delims,begIdx);

        if (endIdx == string::npos)
        {
            endIdx = str.length();
        }

        for (i = endIdx - 1; i >=static_cast<int>(begIdx); --i)
        {
            cout << str[i];
        }

        begIdx = str.find_first_not_of(delims,endIdx);

        for (i = endIdx; i < (int)begIdx ; ++i)
        {
            cout << str[i];
        }
    }

    for (i = 0 ; i < n; ++i)
    {
        cout << ' ';
    }

    cout << endl;
}

int main()
{
    char c;
    int n = 0;
    int index = 0;
    int j = 0;
    int cnt_space = 0;
    char sz[1024] = {'\0'};
    string str;

    scanf("%d",&n);
    scanf("%c",&c);

    while(n--)
    {
        index = 0;
        cnt_space = 0;
        while(scanf("%c",&c)!=EOF&&c!='\n')
        {
            sz[index++] = c;
        }
        sz[index] = '\0';

        for (j = index-1 ; isspace(sz[j]); j--)
        {
            ++cnt_space;
        }

        str = sz;
        //z getline(cin,str);

        revert_str(str,cnt_space);
    }

    return 0;
}
