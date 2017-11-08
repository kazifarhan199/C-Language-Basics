// Find whether the given number is even or odd without modular or bitwise op//
#include<stdio.h>

void main()
{
  int a;
  printf("Enter a number : ");
  scanf("%d",&a );

  if (a/2*2 == a)
    printf("%d is even number \n",a);
  else
    printf("%d is Odd number \n",a);
}
