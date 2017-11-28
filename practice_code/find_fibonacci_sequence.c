//Display Fibonacci Sequence //
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n ,t1=0,t2=1,r;
    printf("Enter a number : " );
    scanf("%d",&n );
    printf("The Fibonacci Sequence of %d is : ", n);
    for (i=0;i<n;++i)
    {
        printf("%d  ",t1 );
        r=t1+t2;
        t1=t2;
        t2=r;
    }
}
