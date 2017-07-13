#include <stdio.h>

int main()
{
    int n =0;
    int lastF = 0;
    int nowF = 0;
    int sum = 0;

    scanf("%d",&n);

    while(n != 0)
    {
        sum = 0;
        lastF = 0;

        while(n-- >0)
        {
            scanf("%d",&nowF);
            if (nowF > lastF)
            {
                sum += 6*(nowF - lastF) + 5;
            }
            else
            {
                sum += 4*(lastF - nowF) + 5;
            }

            lastF = nowF;
        }

        printf("%d\n",sum);
        scanf("%d",&n);
    }

    return 0;
}
