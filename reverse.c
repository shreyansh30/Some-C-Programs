#include <stdio.h>

int main()
{
    int n, a,b,c, reverse;    

    printf("Enter the number to reverse : ");
    scanf("%d", &n);

    a = n / 100;
    b = (n % 100) / 10;
    c = (n % 10);
    
    reverse = c*100 + b*10 + a;

    printf(" The reverse is %d", reverse);
}