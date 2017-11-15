// initilise an array of 2x2 of values A,B,C,D //
#include <stdio.h>

void main()
{
    char a[2][2]={'A','B','C','D'};
    int i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%c\t",a[i][j] );
        printf("\n");
    }
}
