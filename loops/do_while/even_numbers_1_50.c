// pritn even numbers from 1 to 50 //
#include <stdio.h>

int main()
{
  int a=1;
  do{
    (a%2==0)?printf("%d\n",a ):printf("");
    a++;                              //OR a+=2
  }while(a<=50);
}


