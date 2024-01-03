#include <stdio.h>
#include <math.h>

int main()
{
    float i,n,x;
    
    printf("Enter the value of n : ");
    scanf("%f",&n);

    printf("Enter the value of x : ");
    scanf("%f",&x);

    float s = 1; 
    
    for (i=2;i<=n;i=i+2)
    {
        float nu = pow(x,i);
        float de = 1;
        de = de*i;
        s=s+(nu/de);   
    }
    
    printf("Sum of the series is %f",s);
}
