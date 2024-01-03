#include <stdio.h>

int main()
{
    int f,c;
    printf("Enter Fahrenheit Temperature : ");
    scanf("%d", &f);

    c = ((f-32)*5)/9;

    printf("The Temperature in Celcius is :%d",c);
}
