#include<stdio.h>  
int main()    
{    
    int i;
    float fact=1,number;  

    printf("Enter a number: ");    
    scanf("%f",&number);

    for(i=1;i<=number;i++)
    {    
      fact=fact*i;    
    }    

    float result = 1/fact;
    printf("Value of 1/%.0f! is : %f",number,result);    
}   
