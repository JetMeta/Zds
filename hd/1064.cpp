#include <stdio.h>

int main()
{
    int n = 0;
    float f = 0.0;
    float sum = 0.0;

    while(scanf("%e",&f)!=EOF)
    {
        sum += f;
        ++n;
    }

    printf("$%.2f\n",sum/n);

    return 0;
}
