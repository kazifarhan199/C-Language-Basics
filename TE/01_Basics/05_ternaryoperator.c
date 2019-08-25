#include<stdio.h>

int main(){
	int a,b;
	
	printf("Enter a and b :\n");
	scanf("%d%d",&a,&b);
	
	(a>b) ? printf("\n%d is greater than %d\n",a,b) : printf("\n%d is greater than %d\n",b,a);
	
	getch();
}
	

