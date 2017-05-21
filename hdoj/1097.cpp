#include <stdio.h>

char getlastnum(int m,int n)
{
    switch(m)
    {
    case 0:
        return '0';
    case 1:
        return '1';
    case 2:
        return "6248"[n%4];
    case 3:
        return "1397"[n%4];
    case 4:
        return "64"[n%2];
    case 5:
        return '5';
    case 6:
        return '6';
    case 7:
        return "1793"[n%4];
    case 8:
        return "6852"[n%4];
    case 9:
        return "19"[n%2];
    default:
        return -1;
    }
}

int main()
{
    int m,n;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        printf("%c\n",getlastnum(m%10,n));
    }

    return 0;
}
