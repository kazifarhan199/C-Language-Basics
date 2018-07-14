//  Check Armstrong Number of three digits
#include<stdio.h>

int main()
{
    int a,b,i,remainders,l=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    b=a;

    while(b!=0)
    {
        remainders = b%10;
        l += remainders*remainders*remainders;
        b /= 10;
    }

    if (l == a)
        printf("%d is an Armstrong number of three digits \n",a );
    else
        printf("%d is not an Armstrong number of three digits\n",a );
}


