//z 计算两点间的距离

#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1;
    float x2,y2;
    float len;

    while(scanf("%f %f %f %f",&x1,&y1,&x2,&y2)!=EOF)
    {
        len = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        printf("%.2f\n",len);
    }

    return 0;
}
