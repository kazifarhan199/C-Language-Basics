#include <stdio.h>

void insersionSort(int arr[], int n){
	int i, key, j;

	for(i=0; i<n ;i++){
		key = arr[i];
		j=i-1;
		while(j<=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j=j+1;
		}
		arr[j+1]=key;


	}

	for (i=0;i<5;i++)
		printf("\nLet us see %d\n",arr[i] );
}

void printArray(int arr[], int n){
	int i;
	for (i=0;i< n;i++)
		printf("%d\n",arr[i] );
	printf("\n");
}

int main(){
	int arr[] = {12,11,13,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i, key, j;

	// insersionSort(arr, n);

	for(i=1; i<n; i++){
		j=i-1;
		while(j>=0 && arr[j]>arr[i]){
			key = arr[j];
			arr[j] = arr[i];
			 arr[i] = key;
			j=j-1;
		}
	}

	printArray(arr, n);


	return 0;
}