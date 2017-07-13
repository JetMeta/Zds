#include <stdio.h>

//z 到时候修改下吧；可以直接使用字符来进行运算的。
//z 类似以前做过的大数加减。

int main()
{
    __int64 i,j,res;

    while(scanf("%I64X %I64X",&i,&j)!=EOF)
    {
        res = i+j;

        if (res < 0)
        {
            res = -res;
            printf("-%I64X\n",res);
        }
        else
        {
            printf("%I64X\n",res);
        }
    }

    return 0;
}
