/*
The name of array is a pointer(pointing ot a memory location)
and by adding 1 to it
we get the location of the next value (e.g next int)
To acess the first element we dont need to add any thing
so we write 0 as (a+0=a) that is location


Example:
	if "int a[5]"

	let
		*(a) = 2000 ------------(location)

	Then
		*(a+1) = 2004 -----------(as size of int is 4 byte in gcc)

	To acess 1'st element we want to read at 2000 so we do
		*(a+0) = 2000 ----------------(This is where first element is stored)

*/

#include <stdio.h>

int main(){
	//Hear 5 is the no of elements of array
	int a[5]={10,20,30,40,50};

	printf("%d\n",a[1]);
	printf("%d\n",1[a]);
	
	/*These Both have same output as 
	internaly compiler add them them so both will become 
	(a+1) and (1+a) respectively
	and as booth are same (a+1 == 1+a), so both the above 
	out puts are the same 
	*/

	return 0;
}