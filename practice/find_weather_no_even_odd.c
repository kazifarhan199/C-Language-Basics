//Find weather number is even or odd
#include<stdio.h>
#include<conio.h>

void main(){
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	(a%2==0)?(printf("\n%d is even number",a)):(printf("\n%d an odd number",a));
	getch();
}