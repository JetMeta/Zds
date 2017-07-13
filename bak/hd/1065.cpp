#include <stdio.h>

const float PI = 3.1415926;

int main()
{
    int iCnt = 1;
    int i = 0;
    int n = 0;
    int iyear = 0;
    float fr = 0.0,ft = 0.0;
    float fSum = 0.0;
    scanf("%d",&n);

    while (n-- > 0)
    {
        scanf("%f %f",&fr,&ft);

        fSum = fr*fr + ft*ft;

        for (iyear = 0 ; iyear*100 - fSum*PI < 0; ++iyear)
        {

        }

        printf("Property %d: This property will begin eroding in year %d.\n",iCnt++,iyear);
    }

    printf("END OF OUTPUT.\n");

    return 0;
}
