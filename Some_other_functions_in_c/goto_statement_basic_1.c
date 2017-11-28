#include<stdio.h>

void main()
{
    int say;
    again:
    printf("Say some thing K :" );
    scanf("%d",&say );
    if (say == 1)
    {
        goto again;
    }
    printf("This the end of it " );
}
