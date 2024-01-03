#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first integer : ");
    scanf("%d",&a);

    printf("Enter second integer : ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("Swapping done!\n");
    printf("Value of a is : %d\n",a);
    printf("Value of b is : %d\n",b);
}
