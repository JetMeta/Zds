// HDU 1266 Reverse Number

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void run()
{
    string sn;
    cin>>sn;

    if (sn[0]=='-')      // 输出符号
    {
        cout<<"-";
        sn=sn.substr(1, sn.size()-1);     // 调整内容
    }
    int pos=sn.size()-1;     // 计算尾端0的位置
    while(sn[pos]=='0')
    {
        pos--;
    }

    reverse(sn.begin(), sn.begin()+pos+1);   // 逆转部分区域
    cout<<sn<<endl;
}
int main()
{
    int total;
    cin>>total;
    for(int now=1; now<=total; now++) run();
    return 0;
}
