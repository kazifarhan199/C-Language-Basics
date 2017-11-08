// Find a Year is leap year or not //
#include<stdio.h>

void main()
{
  int a;
  printf("Enter a year :" );
  scanf("%d",&a);

  if (a%400==0)
    printf("%d is a Leap Year\n",a );
  else if (a%100==0)
    printf("%d is not a Leap Year\n",a);
  else if (a%4==0)
    printf("%d is a Leap Year\n",a);
  else
    printf("%d is not a Leap Year\n",a );
}
