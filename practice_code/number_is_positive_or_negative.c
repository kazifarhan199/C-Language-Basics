// Weather given number is positive or negative //
#include<stdio.h>

int main()
{
  int a;
  printf("Enter a number :" );
  scanf("%d",&a );

  if (a>0)
    printf("%d is positive (+) \n",a );
  else if (a==0)
    printf("%d is zero (0) \n",a );
  else
    printf("%d is negative (-) \n",a );
}


