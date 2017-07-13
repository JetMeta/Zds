#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int m;

    string strName;
    string strIn;
    string strOut;
    string strNameMin;
    string strTimeMin("23:59:59");
    string strNameMax;
    string strTimeMax("00:00:00");

    cin >> n;

    while(n--)
    {
        cin >> m;
        strTimeMin = "23:59:59";
        strTimeMax = "00:00:00";

        while(m--)
        {
            cin >> strName >> strIn >> strOut;
            if (strIn < strTimeMin)
            {
                strNameMin = strName;
                strTimeMin = strIn;
            }

            if(strOut > strTimeMax)
            {
                strNameMax = strName;
                strTimeMax = strOut;
            }
        }

        cout << strNameMin << " " << strNameMax << "\n";
    }

    return 0;
}
