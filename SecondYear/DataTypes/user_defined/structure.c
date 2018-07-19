// Data Type

/*Structure is a user defined datatype is a collection of different data types 
which are grouped together and each element is called member
To acess elements of structure we use '.'dot operator*/

/*In Structure the total size of Structure is the
sum of the sizes of all the element in the
Structure */

#include <stdio.h>
#include <string.h>

struct Fighter
{
	char name[10];
	int health;
	int attack;
};
//This can also be used to define variable of
//fighter type
// }jack;


int main(){
	struct Fighter jack;

	strcpy(jack.name,"Jack");
	jack.health=100;
	jack.attack=10;

	printf("Fighter name is %s\n",jack.name );
	printf("His health is %d\n",jack.health);
	printf("His attack is %d\n",jack.attack);

	return 0;
}