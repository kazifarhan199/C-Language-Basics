// Use array add sub mul div mod //
#include<stdio.h>

void main()
{
    int a[8],i,r=0;
    float f;
    printf("Enet eight numbers : " );
    for (i=0;i<8;i++)
        scanf("%d",&a[i] );

    for(i=0;i<8;i++)
        r+=a[i];
    printf("\nSum is %d\n ",r );

    r=0;
    for(i=0;i<8;i++)
        r-=a[i];
    printf("\nSubstraction is %d\n",r );

    r=1;
    for (i=0;i<8;i++)
        r*=a[i];
    printf("\nMultiplication is %d\n",r );

    f=0;
    printf("\n" );
    for (i=0;i<8;i++)
    {   f=a[i];
        printf("%d/2 is %f\n",a[i],f/2 );}

    r=0;
    printf("\n" );
    for(i=0;i<8;i++)
        printf("%d mod of 2 is %d\n",a[i],a[i]%2 );

}
