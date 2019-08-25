#include <stdio.h>
// Function decleration
int add(int ,int );

int main()
{
    int x,y;
    printf("Enter 2 number :" );
    scanf("%d%d",&x,&y );
    printf("%d",add(x,y)); //Funtion call
}

// Function defination
int add(int a,int b)
{
    return a+b;
}


