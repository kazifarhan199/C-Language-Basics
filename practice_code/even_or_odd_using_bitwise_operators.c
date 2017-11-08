// Find whether the given number is even or odd //
#include<stdio.h>

void main()
{
  int a;
  printf("Enter a number : ");
  scanf("%d",&a );

  if (a & 1 == 1)
    printf("%d is odd number \n",a);
  else
    printf("%d is even number \n",a);
}
