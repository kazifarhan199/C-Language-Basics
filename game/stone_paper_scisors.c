#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void main()
	{
		int choice,computer_choice;
	
	for (int i=0;i<3;i++){
		printf("\nEnter you'r choice 1-stone, 2-paper, 3-scisors :\n");
		scanf("%d",&choice);
		computer_choice = (rand()%3)+1;
		printf("Computer - %d \n",computer_choice );
		
		if (choice==1 && computer_choice==3) 
			{printf("\n@ VICTORY...........\n\n");}
		else if (choice==2 && computer_choice==1)
			{printf("\n@ VICTORY...........\n\n");}			
		else if (choice==3 && computer_choice==2)
			{printf("\n@ VICTORY...........\n\n");}
		
		else if (computer_choice==1 && choice==3) 
			{printf("\n@ LOSS..............\n\n");}
		else if (computer_choice==2 && choice==1)
			{printf("\n@ LOSS..............\n\n");}			
		else if (computer_choice==3 && choice==2)
			{printf("\n@ LOSS..............\n\n");}

		else if(computer_choice==choice)
			{printf("\n@ TUYE..............\n\n");}

		else
		{printf("\n@ NOT VALIED CHOICE !!!!!! \n\n");}
		
	}
	getch();
}