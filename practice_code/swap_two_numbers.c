// Swap to numbers //
#include<stdio.h>
int swap(int ,int );

int main()
{
  int a,b;
  printf("Enter two numbers \n" );
  scanf("%d%d",&a,&b);
  printf("\na is : %d\n",a );
  printf("b is : %d\n\n",b );
  swap(a,b);
}
int swap(int a,int b)
{
  int t=a;
  a=b;
  b=t;
  printf("a is : %d\n",a );
  printf("b is : %d\n",b );
}


