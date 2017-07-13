#include <stdio.h>

void f(float a,float b,float c)
{
    //if (a > 0 && b > 0 && c > 0)
    {
        if (a+b>c&&b+c>a&&a+c>b)
        {
            printf("YES\n");
            return ;
        }
    }

    printf("NO\n");
}

int main()
{
    int n;
    float a,b,c;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%f %f %f",&a,&b,&c);

        f(a,b,c);
    }

    return 0;
}
