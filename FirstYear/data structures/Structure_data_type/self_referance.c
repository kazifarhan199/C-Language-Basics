#include<stdio.h>

struct NODE
{
             struct NODE *new;    /* 'new' declared variable */
             int value;
};

int main()
{
    struct NODE a;
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(a.value));
    printf("%d\n", sizeof(a.new));
    printf("Hello World" );
}


