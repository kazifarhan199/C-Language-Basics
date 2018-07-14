#include<stdio.h>
#include<strings.h>

int main()
{
    char a[10] , b[10] ;
    printf("Enter a string : "  );
    scanf("%s",&a );

    strcpy(b,a);

    printf("%s",b );
}

