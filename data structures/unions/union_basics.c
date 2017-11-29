#include<stdio.h>
/*
It is same as structure
But the memory is allocated after declaration of variable now when declared
*/
union f
{
    int a;
};

void main()
{
    union f a;
    a.a=10;
    printf("%d",a);
}
