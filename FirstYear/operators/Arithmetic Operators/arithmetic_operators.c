// Arithmetic Operators //
#include "stdio.h"
void Arithmetic_operators(int ,int);

int main()
{
  int a,b;
  printf("Enter two numbers :\n " );
  scanf("%d%d",&a,&b );
  Arithmetic_operators(a,b);
}

void Arithmetic_operators(int a,int b)
{
  printf("%d is addition\n",a+b );
  printf("%d is substraction\n",a-b );
  printf("%d is multiplication\n",a*b );
  printf("%d is division\n",a/b );
  printf("%d is modilus\n",a%b );
}


