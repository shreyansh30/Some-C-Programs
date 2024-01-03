#include <stdio.h>

int main()
{
    int a,b,h;
    printf("Enter base of Triangle : ");
    scanf("%d",&b);

    printf("Enter height of Triangle : ");
    scanf("%d",&h);

    a = 0.5*b*h;

    printf("Area of Triangle is : %d",a);
}
