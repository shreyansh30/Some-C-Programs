#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    
    printf("Enter another number : ");
    scanf("%d",&y);
    
    (x ^= y), (y ^= x), (x ^= y);
    printf("After Swapping values of x and y are %d %d", x,y);
}