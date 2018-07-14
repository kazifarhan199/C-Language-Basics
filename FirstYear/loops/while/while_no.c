#include<stdio.h>
#include<conio.h>

int main(){
	int a,b;
	
	printf("Enter Starting and ending : \n");
	scanf("%d%d",&a,&b);
	
	while(a<=b){
		printf("%d\t",a);
		a++;
	}
	getch();
}

