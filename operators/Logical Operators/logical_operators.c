// Logical Operators//
#include<stdio.h>

int main()
{
  int a,b,c;
  int n=0;   //it's just used for else of all condition
  printf("Enter three numbers :\n");
  scanf("%d%d%d",&a,&b,&c );

  if (a==b && b==c)
  {
    printf("its == \n" );
    n++;
 }

  if (a==b || b==c)
    {
      printf("its a==b || b==c \n");
      n++;
    }

  if (!a==b)
    {
      printf("its ! \n");
      n++;
    }

  if (n==0)
    printf("No logical operator\n");

}


