#include <stdio.h>
#include <string.h>

//#include <vld.h>

char hdu[160] = {'\0'};
char output[160] = {'\0'};

static void initHdu()
{
    int i = 0;

    for (i = 0 ; i < 160 ; i+=3)
    {
        hdu[i] = 'H';
        hdu[i+1] = 'D';
        hdu[i+2] = 'U';
    }
}

static void f(int m)
{
    int i = 0;
    m = m*3;

    strncpy(output,hdu,m);
    output[m] = '\0';

    for (i = 0 ; i < m; ++i)
    {
        printf("%s\n",output);
    }
}

int main()
{
    int n;
    int m;

    initHdu();

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        f(m);
    }

    return 0;
}
