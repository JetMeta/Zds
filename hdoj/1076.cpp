#include <stdio.h>

//z  if (Y%4==0 && Y%100!=0) or Y%400==0
int f(int y,int n)
{
    int i = 0;
    int cnt = 0;

    for (i = 0 ; cnt < n; ++i,++y)
    {
        if (((y%4==0)&&(y%100!=0))||(y%400==0))
        {
            ++cnt;
        }
    }

    return y-1;
}

int main()
{
    int n;
    int year=0;
    int cnt=0;

    scanf("%d",&n);

    while(n-- > 0)
    {
        scanf("%d %d",&year,&cnt);
        printf("%d\n",f(year,cnt));
    }

    return 0;
}
