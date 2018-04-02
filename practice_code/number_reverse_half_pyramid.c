// Number Reverse Half Pyramid //
#include<stdio.h>

int main()
{
    int i,a;
    for (i=6;i>=1;i--)
    {
      for (a=1;a<=i;a++)
        printf("%d",a);
      printf("\n");
    }
}


