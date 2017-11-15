// Find area and Circumference of Circle //
#include<stdio.h>

void main()
{
    int p=3,a=0,c=0,r=0;
    printf("enter value of radious :\n");
    scanf("%d",&r );
    a=r*r*p;
    c=2*p*r;
    printf("Area is %d\n",a );
    printf("Circumference is %d\n",c );
}
