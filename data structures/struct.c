// Struct data structure //
#include<stdio.h>

struct child
{
    char name[30];
    int roll_no;
};
//or "s;" (herse structure variable is "s")[either declare (or create object) hear or below in main function]

void main()
{
    struct child s ;
    //or "s;" (herse structure variable is "s")[either declare hear or above]
    printf("Enter the name \n" );

    //Hear the "." is knwon as "dot operator"

    scanf("%s",&s.name );
    printf("Enter the roll_no\n" );
    scanf("%d",&s.roll_no );
    printf("\n" );
    printf("The name of student is : %s\n",s.name );
    printf("The roll_no of student is : %d\n",s.roll_no );
}
