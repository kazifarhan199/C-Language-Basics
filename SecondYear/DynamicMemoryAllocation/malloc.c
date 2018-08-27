#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, n;
  printf("Enter the number : ");
  scanf("%d",&n );
  //malloc return a void pointer(A pointer which has no data type)
  //Depending on the byte possed in it (hear it is 4 int )
  int *A = (int*)malloc(4*(sizeof(int)));
  // free can be used to de-allocate the space
  //Even after de-allocating by using pointer we can still retrive and write
  //data to the location

  // free(A)

  //Ater un-allocating the space can be allocated for other purpose

  //Don't belive try it un-comment the line abbove
  for (i=0;i<n;i++){
    A[i] = i;
    printf("%d\t",A[i]);
  }
  printf("\nThe size of array is %d",n*sizeof(A));
}
