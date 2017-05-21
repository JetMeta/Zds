#include <stdio.h>

int arr2[] = {6,2,4,8};
int arr3[] = {1,3,9,7};
int arr4[] = {6,4};
int arr7[] = {1,7,9,3};
int arr8[] = {6,8,4,2};
int arr9[] = {1,9};

int main()
{
    int n;
    int m;
    int temp;
    int i = 0;
    long result = 0L;

    scanf("%d",&n);

    while(n-- > 0)
    {
        scanf("%d",&m);
        temp = m;

        while(temp > 9)
        {
            temp -= 10;
        }

        switch(temp)
        {
        case 0:
            result = 0;
            break;
        case 1:
            result = 1;
            break;
        case 2:
            result = arr2[m%4];
            break;
        case 3:
            result = arr3[m%4];
            break;
        case 4:
            result = arr4[m%2];
            break;
        case 5:
            result = 5;
            break;
        case 6:
            result = 6;
            break;
        case 7:
            result = arr7[m%4];
            break;
        case 8:
            result = arr8[m%4];
            break;
        case 9:
            result = arr9[m%2];
            break;
        }

        printf("%d\n",result);
    }

    return 0;
}
