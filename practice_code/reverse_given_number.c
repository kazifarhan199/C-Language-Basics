// reverse given number///
#include<stdio.h>

int main()
{
    int a ,r , m=0;
    printf("Enter a number " );
    scanf("%d",&a );

    while(a>=1)
    {
        r = a%10;
        m = m*10 +r;
        a /= 10;
    }
    printf("\nReversed Order is : %d",m );
}


