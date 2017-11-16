// Using other functions rather than scanf and printf //
#include<stdio.h>

void main()
{
    char str[30];
/*
    //For getchar and putchar//
    char ch;
    printf("Enter a charcater : " );
    ch=getchar();
    printf("\nYou entered : " );
    putchar(ch);
*/
    //For gets and puts//
    printf("\nEnter a string :" );
    gets(str);
    printf("\nYou entered :" );
    puts(str);

}
