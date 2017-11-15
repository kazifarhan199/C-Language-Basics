// consept of explicit conversion //
#include <stdio.h>

void main ()
{
    int a=10;
    float b =12.4;
    char c='l';

    a+=(int)b;
    b= (float)a+1.23;
    c= c+(char)b;

    printf("\na = %d\n",a );
    printf("b = %f\n",b );
    printf("c = %c\n",c );
}
