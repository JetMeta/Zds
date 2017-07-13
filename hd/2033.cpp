#include <stdio.h>

int main()
{
    int n;
    int h1,h2;
    int m1,m2;
    int s1,s2;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d %d %d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
        h1+=h2;
        m1+=m2;
        s1+=s2;

        if (s1 >59)
        {
            m1+=1;
            s1-=60;
        }

        if (m1>59)
        {
            h1+=1;
            m1-=60;
        }

        printf("%d %d %d\n",h1,m1,s1);
    }

    return 0;
}
