// Quick sort 
/* */
#include <stdio.h>
#include "2d_array_input_output.h"	//My library

void quick_sort(int a[], int s, int e);

int partision(int a[], int s, int e){
	int pivet=a[e], pi=s, i=s;
	for(i; i<e; i++)
		if(a[i]<=pivet){
			swap_int_address(&a[i], &a[pi]);
			pi++;
		}
	swap_int_address(&a[pi], &a[e]);
	return pi;
}

void quick_sort(int a[], int start, int end){
	int pi;
	if(start<end){
		pi = partision(a, start, end);
		quick_sort(a, start, pi-1);
		quick_sort(a, pi+1, end);
	}
}

int main(){
	int a[100], n;
	printf("\n\n** Quick Sort **\n\n");
	n = take_input(a);
	quick_sort(a, 0, n);
	print_output(a, n);
}