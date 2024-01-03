#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1,n2,n3;

    printf("Enter the sides of triangle : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if (n1==n2 && n2==n3)
    {
        printf("The triangle is equilateral");
    }

    else if (n1!=n2 && n2!=n3)
    {
        printf("The triangle is scalene");
    }

    else
    printf("The triangle is isoceles");
    
    
}
