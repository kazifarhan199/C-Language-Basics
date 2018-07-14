#include<stdio.h>
#include<conio.h>

void swap(int x,int y )
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("a : %d \n",x );
    printf("b : %d \n",y );
}

int main()
{
    int a,b;
    printf("Enter Two numbers : " );
    scanf("%d%d",&a,&b );
    swap(a,b);
}


