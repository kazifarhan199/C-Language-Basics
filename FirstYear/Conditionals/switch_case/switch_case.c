#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	
	printf("Enter command (1-3) : ");
	scanf("%d",a);
	
	switch(a)
	{
		case 1:
			printf("It's the first one :) ");
			break;
		case 2:
			printf("It's the second one :) ");
			break;
		case 3:
			printf("It's the third one :) ");
			break;
		default:
			printf("This is default :) ");
			break;
	}		
	getch();
}

