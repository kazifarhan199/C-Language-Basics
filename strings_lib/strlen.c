#include<stdio.h>
#include<strings.h>

int main()
{
    char a[10] ;
    int i;
    printf("Enter a string : "  );
    scanf("%s",&a );

    i = strlen(a);

    printf("Length of string is : %d",i);
}

