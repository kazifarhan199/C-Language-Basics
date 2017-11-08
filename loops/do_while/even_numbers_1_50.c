// pritn even numbers from 1 to 50 //
#include <stdio.h>

void main()
{
  int a=1;
  do{
    (a%2==0)?printf("%d\n",a ):printf("");
    a++;                              //OR a+=2
  }while(a<=50);
}
