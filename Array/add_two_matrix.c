// Adding two matrix //
#include <stdio.h>

void add(int c[2][2],int d[2][2]);

void main()
{
    int a[2][2],b[2][2];
    int x,y;

    printf("Enter values of 1st Matrix 2x2 Matrix :\n" );
    for (x=0;x<2;x++)
        for(y=0;y<2;y++)
            scanf("%d",&a[x][y] );

            printf("\nEnter values of 2nd 2x2 Matrix\n" );
    for (x=0;x<2;x++)
        for(y=0;y<2;y++)
            scanf("%d",&b[x][y] );

    printf("\nThe addition is \n" );
    add(a,b);
}

void add(int c[2][2],int d[2][2])
{
    int x=0,y=0;
    for (x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
            printf("%d\t",c[x][y]+d[x][y] );
        printf("\n" );
    }
}
