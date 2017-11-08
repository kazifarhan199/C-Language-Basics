// Write a c Program to find maximum using simple if  //
#include<stdio.h>
int greater_print(int ,int );

void main()
{
  int a,b;
  printf("Enter two numbers \n");
  scanf("%d%d",&a,&b );
  greater_print(a,b);
}

int greater_print(int a,int b)
{
  if(a>b)
    printf("%d is the greater number\n",a );
  else if (b>a)
    printf("%d is the greater number\n",b );
  else
    printf("Both are same\n" );
}
