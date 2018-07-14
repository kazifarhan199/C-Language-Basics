// Find the number rase to power //
#include<stdio.h>
#include<math.h>

int main()
{
    int a ,p ,r;
    printf("Enter a number : " );
    scanf("%d",&a );
    printf("Enter the power : " );
    scanf("%d",&p );
    r=pow(a,p);
    printf("%d to the power %d is %d",a,p, r );
}

/* Can also use
    int r=1
    while(p != 0)
    {
        r *= a;
        p--;
    }
}
*/


