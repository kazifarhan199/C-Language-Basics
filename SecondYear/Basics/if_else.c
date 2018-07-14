#include <stdio.h>

int main(){
	int age;
	
	printf("Enter You'r age : ");
	scanf("%d",&age);

	if (age > 18)
		printf("You are an adult");
	else if(age == 18)
		printf("You just became an adult");
	else
		printf("You are not an adult");


	return 0;
	// getch()		Optional and should not be placed for gcc compiler
}