#include <stdio.h>


int main()
{
    int n, s, fd, ld,d;

    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    
    ld = n % 10;
    fd = n/100000;
    s = fd+ld;
    printf("Sum of first and last digit = %d", s);
}
