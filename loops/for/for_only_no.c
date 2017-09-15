#include<stdio.h>
#include<conio.h>

void main(){
//	int a;
	int b;
	
//	printf("Enter Starting and ending : \n");
	printf("Enter the upper limit : \n");
//	scanf("%d%d",&a,&b);
	scanf("%d",&b);
	
//	for(a;a<=b;a++){
	for(int a=1; a<=b; a++){
		printf("%d\t",a);
	}
	getch();
}