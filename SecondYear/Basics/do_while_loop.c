#include <stdio.h>

int main(){
	int start, stop, step;
	int i;

	printf("You want to print from (number): ");
	scanf("%d",&start);
	
	printf("You want to stop at (number): ");
	scanf("%d",&stop);

	printf("You want to Take step of (number): ");
	scanf("%d",&step);

	//Using while loop to print from start(given by user) to stop(given by user)
	//Bu incrementing by step(given by user)
	//The code inside do{} will run for one time even if start<stop is false 
	do{
		printf("%d\n", start);
		start+=step;
	}while(start<stop);

	return 0;
}