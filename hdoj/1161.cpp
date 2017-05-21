#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class ToLower
{
public:
    void operator()(char elem)
    {
        if (elem > 'A' -1 && elem < 'Z'+1)
        {
            cout << (char)(elem - 'A' + 'a');
        }
        else
        {
            cout << elem;
        }
    }
};

int main()
{
    string str;
    str.reserve(1024);

    while(getline(cin,str))
    {
        for_each(str.begin(),str.end(),ToLower());
        printf("\n");
    }

    return 0;
}
