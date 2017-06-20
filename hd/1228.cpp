#include <stdio.h>
#include <map>
#include <string>
#include <iostream>

using namespace std;

map<string,int> zmap;

void InitZmap(map<string,int>& zmap)
{
    zmap["one"] = 1;
    zmap["two"] = 2;
    zmap["three"] = 3;
    zmap["four"] = 4;
    zmap["five"] = 5;
    zmap["six"] = 6;
    zmap["seven"] = 7;
    zmap["eight"] = 8;
    zmap["nine"] = 9;
    zmap["zero"] = 0;
    zmap["+"] = 10;
}

void Input()
{
    char s0[6] = {'\0'};
    char s1[1024] = {'\0'};
    char s2[1024] = {'\0'};
    char s3[1024] = {'\0'};

    while(scanf("%s",s0)&&s0[0]!='=')
    {
    }
}

void procInput()
{
    int op1 = 0;
    int op2 = 0;
    int i,j;
    int sum = 0;
    int iflag = 0;
    string str;

    op1 = 0;
    op2 = 0;
    i = 0;
    j = 1;
    while(cin >> str)
    {
        if (str == "+")
        {
            iflag = 1;
            continue;
        }

        if (str == "=")
        {
            iflag = 0;
            if (op1 == 0 && op2 == 0)
            {
                break;
            }

            sum = op1 + op2;
            cout << sum << endl;

            op1 = op2 = 0;
            continue;
        }

        if (iflag == 0)
        {
            j = zmap[str];
            op1 = op1*10 + j;
        }
        else
        {
            j = zmap[str];
            op2 = op2*10 + j;
        }
    }
}



int main()
{
    InitZmap(zmap);
    procInput();

    return 0;
}
