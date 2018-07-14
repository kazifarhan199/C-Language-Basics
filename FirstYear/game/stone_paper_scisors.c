#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
	{
		int choice,computer_choice;
	
	for (int i=0;i<3;i++){
		printf("\nEnter you'r choice 1-stone, 2-paper, 3-scisors :\n");
		scanf("%d",&choice);
		computer_choice = (rand()%3)+1;
		if (choice==0)
			{	printf("\nExit");
				break;}
		else if (choice==1 && computer_choice==3) 
			{	printf("\nStone VS Scisors\n");
				printf("\n@ VICTORY...........\n\n");}
		else if (choice==2 && computer_choice==1)
			{	printf("\nPaper VS Stone\n");
				printf("\n@ VICTORY...........\n\n");}			
		else if (choice==3 && computer_choice==2)
			{	printf("\nScisors VS Paper\n");
				printf("\n@ VICTORY...........\n\n");}
		
		else if (computer_choice==1 && choice==3) 
			{	printf("\nScisors VS Stone\n");
				printf("\n@ LOSS..............\n\n");}
		else if (computer_choice==2 && choice==1)
			{	printf("\nPaper VS Stone\n");
				printf("\n@ LOSS..............\n\n");}			
		else if (computer_choice==3 && choice==2)
			{	printf("\nScisorsVS Paper\n");
				printf("\n@ LOSS..............\n\n");}

		else if(computer_choice==choice)
			{printf("\n@ TUYE..............\n\n");}

		else
		{printf("\n@ NOT VALIED CHOICE !!!!!! \n\n");}
		
	}
	getch();
}

