// Take value of an array of 2x2 int//
#include <stdio.h>

void main()
{
    int a[2][2];
    int i,j;
    for (i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j] );

    printf("\n" );
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",a[i][j] );
        printf("\n");
    }
}
