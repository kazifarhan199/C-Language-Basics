/* Specila Half Pyramid
  A
  B  C
  D  E  F
  G  H  I  J
*/
#include "stdio.h"

void  main()
{
    int a,i;
    char c='A';

    for (i=1;i<=5;i++)
    {
        for (a=1;a<=i;a++)
        {
            printf("%c\t",c );
            c++;
        }
        printf("\n");
    }
}


