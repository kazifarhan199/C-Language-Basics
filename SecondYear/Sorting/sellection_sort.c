// sellection sort
/* 
	Search of smallest !!! element and place at 0 then 
	find smallest element in 1-n and place it at 1 place, 
	So on ...
*/
#include <stdio.h>
#include "2d_array_input_output.h"

int main(){
	int n, a[100], i, j, s;
	printf("\n\n** Sellection Sort **\n\n")
	//Take in input in given array and return no of elements in it
	n = take_input(a);

	//Main Algorithm
	for(i=0; i<n; i++){
		s=i;
		//Get index of smallest value 
		for(j=i+1;j<n;j++)
			if (a[s] > a[j])
				s = j;
		swap_int_address(a[s], a[i])
	}

	//Prints array a of size n
	print_output(a, n);
	return 0;
}
