#include <stdio.h>


int main()
{
    int n,a,b,c,d,s;

    printf("Enter a three digit number = ");
    scanf("%d", &n);
    
    a = n % 10;
    b = n/10;
    c = b % 10;
    d = b / 10;
    s = a+c+d;
    printf("Sum of digits are = %d", s);
}
