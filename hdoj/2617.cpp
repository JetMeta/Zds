﻿#include<stdio.h>
#include<string.h>
//z ºÜ¼ò½àºÜÃÀÍÛ
int main()
{
    char s[10001];
    int h,a,p1,p2,y,n,i;
    while(gets(s))
    {
        h=a=p1=p2=y=0;
        n=strlen(s);
        for(i=0; i<n; i++)
        {
            if(s[i]=='h') h++;
            else if(s[i]=='a')
            {
                if(h>0)
                {
                    h--;
                    a++;
                }
            }
            else if(s[i]=='p')
            {
                if(p1>0)
                {
                    p1--;
                    p2++;
                }
                else if(a>0)
                {
                    a--;
                    p1++;
                }
            }
            else if(s[i]=='y')
            {
                if(p2>0)
                {
                    p2--;
                    y++;
                }
            }
        }

        printf("%d\n",y);
    }
    return 0;
}
