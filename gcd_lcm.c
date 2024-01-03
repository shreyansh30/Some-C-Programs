#include <stdio.h>  
  
int main()  
{  
    int n1, n2, gcd, lcm, i = 1, snum;  
  
    printf("Enter two numbers : ");  
    scanf("%d %d", &n1, &n2);  
  
    if (n1<n2)  
    {
        snum = n1;
    }
    else 
    {
        snum = n2;
    }  
  
    while(i <= snum)  
    {  
        if(n1 % i == 0 && n2 % i == 0)  
        {  
            gcd = i;  
        }  
        i++;  
    }  
  
    lcm = ( n1 * n2 ) / gcd;  
  
    printf("GCD of %d and %d is %d \nLCM of %d and %d is %d",n1,n2,gcd,n1,n2,lcm);  
} 