// Not tested
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	struct Node *previous;
	int data;
	struct Node *next;
}node;

void insert(node *pointer, int data){
	node *o_pointer = pointer ;
	while(pointer->next!=NULL)
		pointer = pointer->next;
	pointer->next = (node*)malloc(sizeof(node));
	pointer = pointer->next;
	pointer->data = data;
	pointer->previous = o_pointer;
	pointer->next = NULL;
}

void print(node *pointer){
	pointer = pointer->next;
	printf("\nThe List is : ");
	while(pointer->next!=NULL){
		printf("%d\t",pointer->data );
		pointer = pointer->next;
	}
	printf("%d\t",pointer->data );
}

void delete(node *pointer, int data){
	while(pointer->next != NULL && (pointer->next)->data != data){
		pointer = pointer->next;
	}
	if (pointer->next == NULL){
		printf("Value not found");
		return;
	}
	node *temp = pointer->next;
	node *t = temp->next;
	pointer->next = (pointer->next)->next;
	t->previous = pointer->next; 
	free(temp);	

	return;
}

int main(){
	node *start, *end;
	int choice, t;
	
	start = (node*)malloc(sizeof(node));
	start->next = NULL;
	start->previous = NULL;

	end = start;
	while(1){
		printf("\n\n\t1.Insert element \n\t2.Print List\n\t3.Delete a value\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("\nEnter a new value : ");
				scanf("%d", &t);
				insert(start, t);
				break;
			case 2:
				print(start);
				break;
			case 3:
				printf("\nEnter the value : ");
				scanf("%d", &t);				
				delete(start, t);
				break;
			default:
				printf("Invalied Choice\n");
		}
	}
}