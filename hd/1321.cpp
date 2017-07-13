#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class cout_char
{
public:
    void operator ()(char elem)
    {
        cout << elem;
    }
};

int main()
{
    int n;
    string str;
    str.reserve(96);

    cin >> n;

    getline(cin,str);

    while(n--)
    {
        getline(cin,str);
        for_each(str.rbegin(),str.rend(),cout_char());
        cout << endl;
    }

    return 0;
}
