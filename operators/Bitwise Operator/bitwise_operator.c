// Bitwise Operator
#include<stdio.h>

void main()
{
  int a,b;
  printf("Enter two numbers :\n" );
  scanf("%d%d",&a,&b);
  printf("The bitwise & (And) is %d \n",a&b );
  printf("The bitwise | (Or) is %d \n",a|b );
  printf("The bitwise ^ (Xor) is %d \n",a^b );
  printf("The bitwise ~ (Negation) is %d \n",(~a) );
  printf("The bitwise << (left  shift by 2) is %d\n",a<<2 );
  printf("The bitwise >> (Right shift by 2) is %d\n",a>>2 );
}
