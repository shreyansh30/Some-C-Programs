#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d; 
    float y,r1,r2;
    
    printf("Enter the co-efftcent of x^z or a \n");
    scanf("%f",&a); 
    
    printf("Enter the co-efficent of x or b \n");
    scanf("%f",&b);

    printf("Enter the constant C \n");
    scanf("%f",&c);

    d= (b*b)-(4*a*c); 
    y=sqrt(d);

    if(d<0)
    {
        printf("The roots are Imaginary \n");
        r1=(-b+y)/(2*a);
        r2=(-b-y)/(2*a);
        printf("root1 = %2f \n",r1);
        printf("root2 = %2f \n",r2);
    }
    else if (d==0)
    {
        printf("The roots are real and equal \n ");
        r1 = (-b+y)/(2*a);
        r2 = (-b-y)/(2*a); 
        printf("Root 1 = %2f \n",r1);
        printf("Root 2 = %2f",r2);
    }
    else
    {
        printf(" The Roots are real and unequal \n");
        r1 = (-b+y)/(2*a);
        r2 = (-b-y)/(2*a); 
        printf("Root 1 = %2f \n",r1);
        printf("Root 2 = %2f",r2);
    }
    

}
