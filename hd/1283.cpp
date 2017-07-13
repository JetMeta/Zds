#include <stdio.h>

int main()
{
    int i = 0;
    int m[2]= {0};
    int r[3] = {0};

    while(scanf("%d%d",&m[0],&m[1])!=EOF)
    {
        scanf("%c",&i);
        r[0] = r[1]=r[2]=0;

        while((i = getchar()))
        {
            if (i == '\n')
            {
                printf("%d,%d\n",m[0],m[1]);
                break;
            }
            else
            {
                switch(i)
                {
                case 'A':
                    r[0] = m[0];
                    break;
                case 'B':
                    r[1] = m[1];
                    break;
                case 'C':
                    m[0] = r[2];
                    break;
                case 'D':
                    m[1] = r[2];
                    break;
                case 'E':
                    r[2] = r[1]+r[0];
                    break;
                case 'F':
                    r[2] = r[0]-r[1];
                    break;
                default:
                    break;
                }
            }
        }
    }

    return 0;
}
