/*
typedef allows you to give fancy names to all types of data types
*/
#include <stdio.h>

int main()
{
	//Declaring new data type
	typedef unsigned int MyDataType;

	//Declaring a variable of datatype MyDataType
	MyDataType variable;

	variable = 10;

	printf("%d\n",variable );
	
	return 0;
}