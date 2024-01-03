#include <stdio.h>
#include <math.h>  

int main()    
{    
    int i;
    float fact=1,number,x;  

    printf("Enter the value of x : ");
    scanf("%f",&x);

    printf("Enter a number: ");    
    scanf("%f",&number);

    for(i=1;i<=number;i++)
    {    
      fact=fact*i;    
    }    

    float numenrator = pow(x,number);
    float result = numenrator/fact;

    printf("Value of %.0f^%.0f/%.0f! is : %.2f",x,number,number,result);    
}   
