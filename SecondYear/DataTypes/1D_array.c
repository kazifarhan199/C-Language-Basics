// Data Type

/*Array is a user defined data type that can store elements of same
data type*/

//To write a program whill will take two lists of 4 elements and print 
//the addition of respective elements the two lists

#include<stdio.h>

int main(){
	//Defining 2() integer arrays of 4 elements
	int list_1[4], list_2[4];
	int i;

	//Taking input For first List
	printf("Enter 4 values for First List :\n");
	for(i=0;i<4;i++)
		scanf("%d",&list_1[i]);
	
	//Taking input For second List
	printf("Enter 4 values for Second List :\n");
	for(i=0;i<4;i++)
		scanf("%d",&list_2[i]);

	//Printing output of a
	printf("The addition of respective elements is :\n");
	for(i=0;i<4;i++)
		printf("%d\n",list_1[i]+list_2[i]);

	return 0;
}