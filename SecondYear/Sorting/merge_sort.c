#include <stdio.h>
#include "2d_array_input_output.h"	//My library

int a[100];
int b[100];

void merge(int start, int mid, int end){
   int index_1=start, index_2=mid+1, i=start;
   
   for(i; index_1<=mid && index_2<=end; i++){
      if(a[index_1]<a[index_2])
         b[i]=a[index_1++];
      else
         b[i]=a[index_2++];
   }

   while(index_1<=mid)
      b[i++]=a[index_1++];
   
   while(index_2<=end)
      b[i++]=a[index_2++];

   for (i=0;i<=end;i++)
      a[i] = b[i]; 
}

void sort(int start, int end){
   int mid;
   if (start<end){
      mid = (start+end)/2;
      sort(start, mid);
      sort(mid+1, end);
      merge(start, mid, end);
   }
}

int main() { 
   int i, n;
   n = take_input(a);

   sort(0, n-1);

   print_output(a, n);
}