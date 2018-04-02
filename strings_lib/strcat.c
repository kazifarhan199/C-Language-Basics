#include<stdio.h>
#include<strings.h>

int main()
{
    char a[10] , b[10] ;
    printf("Enter a string : "  );
    scanf("%s",&a );
    printf("Enter \n");
    scanf("%s",&b );

    strcat(a,b);

    printf("\n%s",a );
    printf("\n%s\n",b );
}

