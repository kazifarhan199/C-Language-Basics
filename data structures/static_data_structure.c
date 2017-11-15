// static data structure (It preserves its value even out of its scope (range))
#include<stdio.h>

int adder();

void main()
{
    printf("%d\n",adder() );
    printf("%d\n",adder() );
    printf("%d\n",adder() );
}

int adder()
{
    static int a=0;
    a+=1;
    return a;
}
