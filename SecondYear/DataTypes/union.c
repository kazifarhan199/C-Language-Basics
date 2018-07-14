// Data Type

/*Union is a user defined datatype it is collection of different data types 
which are grouped together and each element is called member
To acess elements of union we use '.'dot operator*/

/*In union the total size of union is the size of the largest element in 
union*/

#include <stdio.h>
#include <string.h>

union Fighter
{
	//char name[4];                 warning when using this
	
	//warning: '__builtin_memcpy' writing 5 bytes into a region of size 4 overflows the destination [-Wstringop-overflow=]
	//strcpy(jack.name,"jack");

	char name[10];
	int health;
	int attack;
};
//This can also be used to define variable of
//fighter type
// }jack;


int main(){
	union Fighter jack;



	strcpy(jack.name,"jack");
	//Becauser it is sharing memory it can only store 5 bytes

	jack.health=100;
	jack.attack=10;

	printf("Fighter name is %s\n",jack.name);
	printf("His health is %d\n",jack.health);
	printf("His attack is %d\n",jack.attack);
}