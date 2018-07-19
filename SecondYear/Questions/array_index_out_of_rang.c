/*
It takes input and is stored and retrived perfectlly
*/

#include<stdio.h>

int main(){
	int list_1[2];
	int i;

	printf("Enter 4'th values for First List :\n");
	scanf("%d",&list_1[4]);

	for (i=0;i<5;i++)
		printf("value of %d is %d\n",i, list_1[i]);

	return 0;
}