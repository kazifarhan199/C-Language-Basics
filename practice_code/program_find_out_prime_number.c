// Program find out prime number //
#include<stdio.h>

void main()
{
    int i,p=0,a;
    printf("Enter a number : ");
    scanf("%d",&a );

    for(i=1;i<=a;i++)
    {
        if(a%i==0)
            p++;
    }
    if(p==2)
        printf("%d is a prime number \n",a );
    else
        printf("%d is not a prime number \n",a );
}
