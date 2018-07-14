// Storage Class

/*static preserves its value even out of its scope*/
#include<stdio.h>

int adder();

int main()
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