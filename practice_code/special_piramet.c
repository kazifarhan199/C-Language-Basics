/* print Perimat
  1
  2 3
  4 5 6
  7 8 9 10
*/
#include<stdio.h>

void main()
{
  int a,b=1,i;

  for (i=1;i<=4;i++)
  {
      for (a=1;a<=i;a++)
      {
          printf("%d\t",b);
          b++;
      }
      printf("\n");
  }
}
