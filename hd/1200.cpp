#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,n,len;
    char str[10000],str1[105][105];
    while(scanf("%d",&n),n)
    {
        getchar();
        gets(str);
        len=strlen(str);
        k=0;
        for(i=0; i<len/n; i++)
        {
            if(i%2==0)
            {
                for(j=0; j<n; j++)
                    str1[i][j]=str[k++];
            }
            else
            {
                for(j=n-1; j>=0; j--)
                    str1[i][j]=str[k++];
            }
        }
        for(j=0; j<n; j++)
        {

            for(i=0; i<len/n; i++)
                printf("%c",str1[i][j]);

        }
        printf("\n");



    }
    return 0;
}
