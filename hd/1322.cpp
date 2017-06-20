//z 文件压缩加密分割放入软盘

#include <iostream>
#include <cmath>

using namespace std;

const double filesize = 1.86*pow(10.0,(int)6);

int main()
{
    int iflag = 0;
    int index = 0;
    double icnt = 0.0;
    int n;

    while(cin >> n && n!=0)
    {
        ++index;
        icnt = 0;
        if (n&1 == 1)
        {
            n = (n>>1)+1;
        }
        else
        {
            n = n >> 1;
        }

        if (n&1==1)
        {
            n = n*3/2 + 1;
        }
        else
        {
            n = n*3/2;
        }

        double fn = n;

        cout << "File #" << index << endl;
        icnt = fn /filesize;
        if (icnt == (int)icnt)
        {
            cout << "John needs " << (int)icnt << " floppies."<<endl<<endl;
        }
        else
        {
            cout << "John needs " << (int)icnt + 1 << " floppies."<<endl<<endl;
        }
    }

    return 0;
}
