#include<stdio.h>
int main()
{
    int j;
    int n,m;
    char ch;
    scanf("%d",&n);
    int flag=1;
    while(n--)
    {
        getchar();//用以收入回车符*******
        if(flag==1) flag=2;
        else printf("\n");
        scanf("%c%d",&ch,&m);
        int n1=m/6+1,n2,n3;
        if(m%2==0)
        {
            n2=(m-3)/2;
            n3=n2+1;
        }
        else
        {
            n2=(m-3)/2;
            n3=n2;
        }
        for(int i=1; i<=m; i++)
        {
            if(i==1||i==n2+2||i==m)
            {
                for( j=1; j<=n1; j++)
                    printf(" ");
                for( j=1; j<=n3; j++)
                    printf("%c",ch);
            }
            else
            {
                for( j=1; j<=n1; j++)
                    printf("%c",ch);
                for( j=1; j<=n3; j++)
                    printf(" ");
                for( j=1; j<=n1; j++)
                    printf("%c",ch);
            }
            printf("\n");
        }
    }
    return 0;
}
