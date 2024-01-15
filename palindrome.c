#include <stdio.h>

int palindrome(int n)
{
    int i,d,r;

    for(i=n;i>0;i/=10)
	{
		d=i%10;
		r=r*10+d;
	}
	
	if (r==n)
	{
		printf("Entered number is a palindrome number");
	}
	else 
	{
		printf("Not a palindrome number");
	}
}

int main()
{
    int n;
    printf("Enter a number to test for palindrome : ");
    scanf("%d",&n);
    
    palindrome(n);
}
