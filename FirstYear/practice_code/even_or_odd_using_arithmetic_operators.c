// Find whether the given number is even or odd //
#include<stdio.h>

int even_or_odd(int a)
{
  if (a%2==0)
  printf("Number is even\n" );
  else
  printf("Number is Odd\n" );
}

void  main()
{
  int n;
  printf("Enter a number :");
  scanf("%d",&n );
  even_or_odd(n);
}


