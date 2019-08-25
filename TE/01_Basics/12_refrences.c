#include<iostream>

int aa(int *a){
    printf("%d", *a);
}

int main(){
    int a = 10;
    aa(&a);
}

