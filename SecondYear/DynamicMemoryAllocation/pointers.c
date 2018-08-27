#include<stdio.h>
#include<stdlib.h>

int main(){
  int *p;
  // int a = 10;
  p = (int *)malloc(sizeof(int));
  *p = 10;
  // can also used if using int a , and to use pointer to point at address of a
  //p = &a
  free(p);
  *p = 90;
  printf("hmmm\n" );
  printf("%d\n", *p);
  return 0;
}
