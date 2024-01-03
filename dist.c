#include <stdio.h>

int main()
{
    int km,m,im;
    printf("Enter distance in meters : ");
    scanf("%d",&im);

    km = im/1000;
    m = (im - km*1000);

    printf("%d Kilometers, %d meters",km,m);
}
