#include <stdio.h>

int main(int argc, char const *argv[])
{
    float i;
    float n;
    printf("Enter the range : ");
    scanf("%f",&n);

    float s = 0;
    i=1;

    while (i<=n)
    {
        s=s+(1/i);
        i++;
    }
    
    printf("Sum of the series is %f",s);
}
