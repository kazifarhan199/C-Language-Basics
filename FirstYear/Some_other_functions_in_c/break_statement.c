#include<stdio.h>

int main()
{
    int i,a;
    printf("Enter a number " );
    scanf("%d",&a );
    for (i=0;i<=10;i++)
    {
        if (i == a)
            break;

        printf("%d\t",i );
    }

}

