// Data Type

/*
Enum is a user defined data type in C 
It will let the variable of type it(the variable), 
	to only be assigned the values inside of it
You cannot assign it int even tho all values in enum 
	are ultimately integers
*/
#include <stdio.h>

// Declaring an enum with name MyEnum
enum MyEnum{
	//** By default A=0, B=1, C=2 and so on ..
	//** if we say A=5 then B will be B=6 or B=(A+1) and C=7 and so on ..
	A=5, B=1, C
};

//This can be used to declare variable of type MyEnum
// }e;

int main(){
	//This is beeing used to declare variable of type MyEnum
	enum MyEnum variable;
	variable=A;

	// Enum can only be one of the values in it 
	// Even tho these values are integers you can't assign an integer to it
	//Enum cannot be e = 10 or any other int 
	
	printf("The value of enum is : %d\n",variable);

	return 0;
}