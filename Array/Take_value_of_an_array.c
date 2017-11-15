// Take value of an array of 2x2 //
#include <stdio.h>

void main()
{
    char a[2][2];
    int x,y;
    for (x=0;x<2;x++)
        for(y=0;y<2;y++)
            scanf("%c",&a[x][y] );

    printf("\n" );
    for (x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
            printf("%c\t",a[x][y]);
        printf("\n");
    }
}
