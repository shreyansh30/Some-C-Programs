#include <stdio.h>

int main()
{
    int n1,n2;
    char o;
    
    printf("Select operator(A,S,M,D) : ");
    scanf("%c",&o);
    
    printf("Enter a number : ");
    scanf("%d",&n1);
    
    printf("Enter another number : ");
    scanf("%d",&n2);
    
    
    switch(o)
    {
   	 case 'A':
   		 printf("The sum of two numbers is : %d",n1+n2);
   		 break;
   		 
   	 case 'S':
   		 printf("The substraction of two numbers is : %d",n1-n2);
   		 break;
   		 
   	 case 'M':
   		 printf("The multiplication of two numbers is : %d",n1*n2);
   		 break;
   		 
   	 case 'D':
   		 printf("The division of two numbers is : %d",n2/n1);
   		 break;
    }
}

