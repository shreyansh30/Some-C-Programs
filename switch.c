#include <stdio.h>

int sum(int x,int y)
{
	int z;
	z=x+y;
	printf("The sum of %d and %d is = %d",x,y,z);
}

int fact(int n)
{
	int i,m=1;
	for(i=n;i>0;i--)
	{
		m=m*i;
	}
	printf("The factorial of %d is = %d",n,m);
}

int fibo(int n)
{
	int a=0,b=1;
	int c;
	c=a+b;
	
	for(int i=3;i<n;i++)
	{
		a=b;
		b=c;
		c=a+b;
	}
	
	printf("Fibonacci number : %d",c);
}

int PRIME(int n)
{
	int p = 1;

	for (int i = 2; i < n ; i++) 
	{
		if (n % i == 0) 
		{
			p = 0;
			break;
		}
	}

	if (p==1) 
	{
		printf("%d is Prime Number\n", n);
	}
	else 
	{
		printf("%d is not Prime Number\n", n);
	}
}

int SWAP(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping\nnum1 : %d\nnum2 : %d",a,b);
}

int main()
{
	printf("MENU :\n1. Sum of two numbers\n2. Factorial of a number\n3. Fibonacci Sequence\n4. Check Prime Number\n5. Swap two numbers ");
	
	int choice;
	int a,b,c,n;
	int ans;
	
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("Enter the two numbers : ");
			scanf("%d %d",&a,&b);
			sum(a,b);
			
			printf("\nDo you want to continue?(1 for yes/0 for no) : ");
			scanf("%d",&ans);
			
			if(ans==0)
			{
				break;
			}
			else
				printf("Thank you\n");
			
		case 2 : 
			printf("Enter a number : ");
			scanf("%d",&n);
			fact(n);
			
			printf("\nDo you want to continue?(1 for yes/0 for no) : ");
			scanf("%d",&ans);
			
			if(ans==0)
			{
				break;
			}
			else
				printf("Thank you\n");
			
		case 3 : 
			printf("Fibonacci term serial number : ");
			scanf("%d",&n);
			fibo(n);
			
			printf("\nDo you want to continue?(1 for yes/0 for no) : ");
			scanf("%d",&ans);
			
			if(ans==0)
			{
				break;
			}
			else
				printf("Thank you\n");
			
		case 4 :
			printf("Enter a number : ");
			scanf("%d",&n);
			PRIME(n);
			
			printf("\nDo you want to continue?(1 for yes/0 for no) : ");
			scanf("%d",&ans);
			
			if(ans==0)
			{
				break;
			}
			else
				printf("Thank you\n");
			
			
		case 5 : 
			printf("Before Swapping\n");
			
			printf("Enter num1 : ");
			scanf("%d",&a);
			
			printf("Enter num2 : ");
			scanf("%d",&b);
			
			SWAP(a,b);
			
			printf("\nDo you want to continue?(1 for yes/0 for no) : ");
			scanf("%d",&ans);
			
			if(ans==0)
			{
				break;
			}
			else
				printf("Thank you\n");
	}
}










































