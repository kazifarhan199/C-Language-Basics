#include <stdio.h>

int main(){
    int a = 0;

    label:

    a+=1;
    printf("%d\n", a);

    if (a == 1)
        goto label;

    printf("done\n");
}