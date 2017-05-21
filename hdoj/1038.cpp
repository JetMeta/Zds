#include <stdio.h>

const float pi = 3.1415927;

int main()
{
    float r;
    int cnt;
    float time;
    int i = 1;
    float dist;
    float speed;

    scanf("%f %d %f",&r,&cnt,&time);

    while(cnt!=0)
    {
        dist = pi*r*cnt;
        dist /=(12*5280);
        time /=3600;
        speed = dist/time;

        printf("Trip #%d: %0.2f %0.2f\n",i,dist,speed);

        ++i;
        scanf("%f %d %f",&r,&cnt,&time);
    }

    return 0;
}
