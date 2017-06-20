#include <cctype>
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

//z 简单的密码对应等
/*
Cipher text
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

Plain text
V W X Y Z A B C D E F G H I J K L M N O P Q R S T U
*/

char* sz_plain = "VWXYZABCDEFGHIJKLMNOPQRSTU";

class trans_char
{
public:
    void operator() (char elem)
    {
        if (isupper(elem))
        {
            cout << sz_plain[elem - 'A'];
        }
        else
        {
            cout << elem;
        }
    }
};

void f(string& str)
{
    if (str == "START"||str == "END"||str == "ENDOFINPUT")
    {
        return;
    }

    for_each(str.begin(),str.end(),trans_char());
    cout << endl;
}

int main()
{
    string str;

    while(getline(cin,str))
    {
        f(str);
    }

    return 0;
}
