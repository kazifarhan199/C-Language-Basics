// Find the length of number //
#include <stdio.h>

int main()
{
    int a,c=0;
    printf("Enter a number : " );
    scanf("%d",&a );

    while(a != 0)
    {
        a /= 10;
        c++;
    }
    printf("\nThe length of number is : %d",c );
}


