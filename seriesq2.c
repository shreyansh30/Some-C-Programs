#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    i=1;
    float s=0;
    
    while (i<=n)
    {
        float a = sqrt(i);
        s=s+a;
        i++;
        
    }
    printf("The sum of the series is : %f",s);
    
}
