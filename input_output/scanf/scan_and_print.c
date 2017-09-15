#include<stdio.h>
#include<conio.h>

void main(){
	int a;
	float b;
	char c;
	
	printf("Enter a int ,float, char :\n");
	scanf("%d%f%s",&a,&b,&c);
	printf("The int is %d \nThe float is %f \nThe char is %c",a,b,c);
	getch();
}