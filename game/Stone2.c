#include<stdio.h>
//#include<conio.h>
#include "stdlib.h"

char choice[9],computer_choice[9];
int game;
int  win();
int  loss();	
	
int main()
{	
	while(game=1)
	{	
		printf("Enter option Stone, paper or scissors :\n");
		scanf("%s",&choice);
		
		if(!strcmp(choice, "exit"))
		{
			printf("Ending...");
			break;
		}		
	
		printf("c");
		scanf("%s",computer_choice);
	
		if(!strcmp(choice==computer_choice))
		{
			printf("%s VS %s \n",choice,computer_choice );
			printf("\nTuye\n");
		}
		else if ((!strcmp(choice=="stone") && !strcmp(computer_choice=="scissors"))||(!strcmp(choice=="paper" )&& !strcmp(computer_choice=="stone"))||(!strcmp(choice=="scissors") && !strcmp(computer_choice=="paper")))
		{
			printf("%s VS %s \n",choice,computer_choice );
			win();
		}
		else if ((!strcmp(computer_choice=="stone") && !strcmp(choice=="scissors"))||(!strcmp(computer_choice=="paper") && !strcmp(choice=="stone"))||(!strcmp(computer_choice=="scissors") && !strcmp(choice=="paper")))	
		{
			printf("%s VS %s \n",choice,computer_choice );
			loss();
		}
	}
//	getch();
	return 0;
}

int win(){
	printf("You wone !!.......");
		return 0;
}

int loss(){
	printf("You loss !!........");
		return 0;
}


