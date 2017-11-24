#include<stdio.h>

void main()
{
    int a[100],i,x,max,min;
    printf("Enter how many numbers :" );
    scanf("%d",&x);

    printf("Enter the numbers :\n" );
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);

    min=a[i];
    max=0;

    for(i=0;i<x;i++)
    {
        if(max < a[i])
            max = a[i];

        if (min > a[i])
            min = a[i];
    }
    printf("The Maximum number is %d \n",max );
    printf("The Minimum number is %d \n",min );
}
