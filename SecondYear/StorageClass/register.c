//Storage Class

/* Register data structure It is the fastest data structure 
(uses registre inside the processor of computer)
Number of variables register variables can only declare 3 to 4 
depending on processor
It's not necessary that if used register in program it will be using register
It’s compiler’s choice to put it in a register or not
*/

//Program to take input store  it in register variable and then print it

#include<stdio.h>

int main()
{
    register int a=0;
    printf("Enter something to put in register variable (int): ");
    scanf("%d",&a);
    printf("The stored value is : %d",a );
}


