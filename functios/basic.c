#include <stdio.h>
int add(int ,int );

int main()
{
    int x,y;
    printf("Enter 2 number :" );
    scanf("%d%d",&x,&y );
    printf("%d",add(x,y));
}

int add(int a,int b)
{
    return a+b;
}


