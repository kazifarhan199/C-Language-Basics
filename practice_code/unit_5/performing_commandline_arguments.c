#include<stdio.h>

void main(int c , char *st[])
{
    int i;
    printf("\nThe argument is %d \n\n",c );
    for(i=0;i<c;i++)
        printf("The string in %d is %s \n",i,st[i] );
    printf("\n");
}


