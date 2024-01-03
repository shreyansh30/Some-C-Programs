#include <stdio.h>

int main()
{
    int lyr;
    printf("Enter a year you want to check : ");
    scanf("%d",&lyr);
    
    if (lyr%400==0)
    {
   	 if (lyr%4==0)
   	 printf("%d is a leap year",lyr);
   	 
   	 else
   	 printf("%d is not a leap year",lyr);
    }
    else if (lyr%4==0)
    {
   	 printf("%d is a leap year",lyr);
    }
    
    else
    printf("Not a leap year");
}