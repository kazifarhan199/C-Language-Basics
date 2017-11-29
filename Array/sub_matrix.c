#include<stdio.h>

void main()
{
    int a[2][2],b[2][2];
    int i,j;

    printf("\nEnter elements of 1st matrix : \n" );
    for (i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    printf("\nEnter elements of 2nd matrix : \n" );
    for (i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    printf("\nThe substraction is : \n", );
    for (i=0;i<2;i++)
        for(j=0;j<2;j++)
            printf("%d",a[i][j]-b[i][j] );


}
