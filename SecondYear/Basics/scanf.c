#include <stdio.h>

int main(){
	int age;
	//Printing "Enter You'r age : "
	printf("Enter You'r age : ");
	//Taking integer input bu using %d 
	//Then storing it at adress of age variable
	scanf("%d",&age);
	//Printing "You'r age is :" then value stored in variable age  
	printf("You'r age is : %d",age);

	return 0;
}