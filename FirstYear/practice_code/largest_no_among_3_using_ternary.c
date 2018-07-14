// Largest no among 3 using ternary //
#include "stdio.h"

int main()
{
    int a,b,c,r;
    printf("Enter 3 no :\n" );
    scanf("%d%d%d",&a,&c,&b );
    r=(a>b) ? ((a>c)?a:c ) : ((b>c)?b:c);
    printf("%d\n",r );
}


