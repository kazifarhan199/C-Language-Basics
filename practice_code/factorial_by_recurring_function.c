// Find factorial by recursive function //
#include<stdio.h>

int fact(int);

void main()
{
  int a;
  printf("Enter a number : ");
  scanf("%d",&a );
  printf("\n%d\n",fact(a) );
}

int fact(a)
{
  if (a==1)
    return 1;
  else
    return (a * fact(a-1));
}
