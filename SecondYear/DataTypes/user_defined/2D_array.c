// Data Type

/*Array is a user defined data type that can store elements of same
data type*/

//Program to add two 2x2 matrices

#include <stdio.h>

int main(){
	int matrix_1[2][2], matrix_2[2][2];
	int i, j;

	//Asking for input of First matrix
	printf("Enter Values of First Matrix \n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d", &matrix_1[i][j]);

	//Asking for input of Second matrix
	printf("Enter Values of Second Matrix \n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d", &matrix_2[i][j]);

	//Printing the addition of the two matrix
	printf("The sum of matrices is  \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			printf("%d\t", matrix_1[i][j]+matrix_2[i][j]);	
		printf("\n");
	}
	return 0;
}