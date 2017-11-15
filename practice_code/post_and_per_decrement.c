// Post and per decrement //
#include <stdio.h>

void main()
{
    int i=4;
    printf("i in pst increment is %d\n",i++ );
    printf("i in pre increment is %d\n",++i );
    while (--i > 4)
        {printf("i is  %d",i);
        i--;}
}
