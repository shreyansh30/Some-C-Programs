#include <stdio.h>

int main()
{
    int m,p,c;
    
    printf("Enter the marks obtained in Physics :");
    scanf("%d",&p);

    printf("Enter the marks obtained in Chemistry :");
    scanf("%d",&c);

    printf("Enter the marks obtained in Maths :");
    scanf("%d",&m);

    int t = m+p+c;
    int tmp = m+p;

    if (m>=65 && p>=55 && c>=50)
    {
        if (t>=190 || tmp>=140)
        {
            printf("The candidate is eligible for admission");
        }
        else
        printf("The candidate is not eligible for admission");
        
    }

    else
    printf("The candidate is not eligible for admission");
    
}
