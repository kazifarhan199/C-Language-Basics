// insertion sort 
/* */
#include <stdio.h>
#include "2d_array_input_output.h"	//My library

int main(){
	int n, a[100], i, j;
	printf("** insertion Sort **")
	//Take in input in given array and return no of elements in it
	n = take_input(a);

	//Main Algorithm
	for(i=0; i<n; i++){
		j=i;
		while(j>0 && a[j-1]>a[j]){       //If firdt element is grather than second
			swap_int_address(&a[j], &a[j-1]);
			j--;
		}
	}

	//Prints array a of size n
	print_output(a, n);
	return 0;
}
