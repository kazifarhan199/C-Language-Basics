// I am using string library //
#include<stdio.h>
#include<string.h>

int main()
{
    char name[30];
    char copy_to[30];
    char combine_with_with[30]="Kazi";
    int l;

    printf("Enter the name of student : " );
    //scanf("%s",&name );
    gets(name);
    printf("\nJus printing %s",name );

    strcpy(copy_to,name);
    printf("\nThis it copy %s \n\n",copy_to );

    strcat(combine_with_with ,name);
    printf("%s\n",combine_with_with );
    printf("%s\n",name );

    l=strlen(name);
    printf("\nLen of name is %d\n",l);

}

