// Relational Operators //
#include<stdio.h>
void  Relational_operators(int ,int);
void main()
{
    int a,b;
    printf("Enter two numbers \n" );
    scanf("%d%d",&a,&b );
    printf("\n\n");
    Relational_operators(a,b);
}

void  Relational_operators(a,b)
{
  if (a > b)
    printf("%d > %d\n",a,b);
  if (a < b)
    printf("%d < %d\n",a,b);
  if (a >= b)
    printf("%d >= %d\n",a,b);
  if (a <= b)
    printf("%d <= %d\n",a,b);
  if (a == b)
    printf("%d == %d\n",a,b);
  if (a != b)
    printf("%d != %d\n",a,b);
}
