#include <stdio.h>
#include <stdlib.h>

void Kill1(int a){
  int *p = (int *)malloc(a*sizeof(int));
}

int Kill2(){
  int i;
  for (i=0;i<100000000;i++)
    Kill1(10);
  for (i=0;i<100000000;i++)
    Kill1(10);
  for (i=0;i<100000000;i++)
    Kill1(10);
  for (i=0;i<100000000;i++)
    Kill1(10);
  for (i=0;i<100000000;i++)
    Kill1(10);
  for (i=0;i<100000000;i++)
    Kill1(10);
  for (i=0;i<100000000;i++)
    Kill1(10);
  for (i=0;i<100000000;i++)
    Kill1(10);
  for (i=0;i<100000000;i++)
    Kill1(10);
  scanf("%s");
  return 0;
}

int kill3(){
  int i;
  for (i=0;i<100000000;i++)
    Kill2();
  for (i=0;i<100000000;i++)
    Kill2();
  for (i=0;i<100000000;i++)
    Kill2();
  for (i=0;i<100000000;i++)
    Kill2();
  for (i=0;i<100000000;i++)
    Kill2();
  for (i=0;i<100000000;i++)
    Kill2();
  for (i=0;i<100000000;i++)
    Kill2();
  for (i=0;i<100000000;i++)
    Kill2();
    for (i=0;i<100000000;i++)
      Kill2();
    for (i=0;i<100000000;i++)
      Kill2();
    for (i=0;i<100000000;i++)
      Kill2();
    for (i=0;i<100000000;i++)
      Kill2();
    for (i=0;i<100000000;i++)
      Kill2();
    for (i=0;i<100000000;i++)
      Kill2();
    for (i=0;i<100000000;i++)
      Kill2();
    for (i=0;i<100000000;i++)
      Kill2();
  return 0;
}

int kill4(){
  int i;
  for (i=0;i<100000000;i++)
    kill3();
  for (i=0;i<100000000;i++)
    kill3();
  for (i=0;i<100000000;i++)
    kill3();
  for (i=0;i<100000000;i++)
    kill3();
  for (i=0;i<100000000;i++)
    kill3();
  for (i=0;i<100000000;i++)
    kill3();
  for (i=0;i<100000000;i++)
    kill3();
  for (i=0;i<100000000;i++)
    kill3();
    for (i=0;i<100000000;i++)
      kill3();
    for (i=0;i<100000000;i++)
      kill3();
    for (i=0;i<100000000;i++)
      kill3();
    for (i=0;i<100000000;i++)
      kill3();
    for (i=0;i<100000000;i++)
      kill3();
    for (i=0;i<100000000;i++)
      kill3();
    for (i=0;i<100000000;i++)
      kill3();
    for (i=0;i<100000000;i++)
      kill3();
  return 0;
}

int kill5(){
  int i;
  for (i=0;i<100000000;i++)
    kill4();
  for (i=0;i<100000000;i++)
    kill4();
  for (i=0;i<100000000;i++)
    kill4();
  for (i=0;i<100000000;i++)
    kill4();
  for (i=0;i<100000000;i++)
    kill4();
  for (i=0;i<100000000;i++)
    kill4();
  for (i=0;i<100000000;i++)
    kill4();
  for (i=0;i<100000000;i++)
    kill4();
    for (i=0;i<100000000;i++)
      kill4();
    for (i=0;i<100000000;i++)
      kill4();
    for (i=0;i<100000000;i++)
      kill4();
    for (i=0;i<100000000;i++)
      kill4();
    for (i=0;i<100000000;i++)
      kill4();
    for (i=0;i<100000000;i++)
      kill4();
    for (i=0;i<100000000;i++)
      kill4();
    for (i=0;i<100000000;i++)
      kill4();
  return 0;
}

int main(){
  int i;
  for (i=0;i<100000000;i++)
    kill5();
  for (i=0;i<100000000;i++)
    kill5();
  for (i=0;i<100000000;i++)
    kill5();
  for (i=0;i<100000000;i++)
    kill5();
  for (i=0;i<100000000;i++)
    kill5();
  for (i=0;i<100000000;i++)
    kill5();
  for (i=0;i<100000000;i++)
    kill5();
  for (i=0;i<100000000;i++)
    kill5();
    for (i=0;i<100000000;i++)
      kill5();
    for (i=0;i<100000000;i++)
      kill5();
    for (i=0;i<100000000;i++)
      kill5();
    for (i=0;i<100000000;i++)
      kill5();
    for (i=0;i<100000000;i++)
      kill5();
    for (i=0;i<100000000;i++)
      kill5();
    for (i=0;i<100000000;i++)
      kill5();
    for (i=0;i<100000000;i++)
      kill5();
  return 0;
}
