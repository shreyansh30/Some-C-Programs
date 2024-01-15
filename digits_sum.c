#include <stdio.h>

int digi_sum(int n)
{
    int digits, sum = 0;

    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Sum of the digits (Upto single digits) of %d = %d ", n, digi_sum(n));
}