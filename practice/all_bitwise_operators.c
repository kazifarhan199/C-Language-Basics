//Bitwise operators
#include<stdio.h>
#include<conio.h>

void main(){
	int a=12,b=16;
	printf("\nBitwise AND of 12 & 16 is %d\n",a&b);
	printf("\nBitwise OR of 12 & 16 is %d\n",a|b);
	printf("\nBitwise XOR of 12 & 16 is %d\n",a^b);
	printf("\nBitwise NEGATION of 12 & 16 are %d , %d\n",~a,~b);
	printf("\nBitwise RIGHT-SHIFT of 12 & 16 is %d\n",a>>b);
	printf("\nBitwise LEFT-SHIFT of 12 & 16 is %d\n",a<<b);
	getch();
}