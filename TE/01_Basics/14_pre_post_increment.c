#include<stdio.h>

void print(int x,int y,int z);

int main(){
    int a;
    a = 1;
    print(a, ++a, a++);
}

void print(int x,int y,int z){
    printf("%d%d%d", x, y, z);
}