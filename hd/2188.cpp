#include <stdio.h>

int main( )
{
    int t, n, m ;

    scanf( "%d", &t ) ;

    while( t -- )
    {
        scanf( "%d%d", &n, &m ) ;
        if( n % (m+1))
        {
            printf( "Grass\n" ) ;
        }
        else
        {
            printf( "Rabbit\n" ) ;
        }
    }

    return 0 ;
}
