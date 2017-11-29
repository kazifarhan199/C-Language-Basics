#include<stdio.h>
#include<strings.h>

void main()
{
    char a[10] ;
    int i;
    printf("Enter a string : "  );
    scanf("%s",&a );

    i = strlen(a);

    printf("Length of string is : %d",i);
}
