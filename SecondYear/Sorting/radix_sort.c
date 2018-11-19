#include<stdio.h>
#include "2d_array_input_output.h"     


int radix_sort(int arr[], int n)
{
        int bucket[10][5], buck[10], b[10];
        int i, j, k, l, num, div, large, passes;

        div = 1;
        num = 0;
        large = arr[0];

        //Find no of digits in no
        for (i = 0 ; i < n ; i++)
        {
                if (arr[i] > large)
                {
                        large = arr[i];
                }

                while (large > 0)
                {
                        num++;
                        large = large / 10;
                }
        }
        //Main Sort
        for (passes = 0 ; passes < num ; passes++)
        {
                for (k = 0 ; k < 10 ; k++)
                {
                        buck[k] = 0;
                }
                // Placing elements in bucket
                for (i = 0 ; i < n  ; i++)
                {
                        l = ((arr[i] / div) % 10);
                        bucket[l][buck[l]++] = arr[i];
                }

                i = 0;
                //Placing into array from bucket
                for (k = 0 ; k < 10 ; k++)
                {
                        for (j = 0 ; j < buck[k] ; j++)
                        {
                                arr[i++] = bucket[k][j];
                        }
                }
                div *= 10;
        }
        return 0;
}

int main()
{
        int array[100], n;
        n = take_input(array);

        radix_sort(array, n);

        printf("\nArray After Radix Sort: ");  //Array After Radix Sort
        print_output(array, n);
        return 0;
}
