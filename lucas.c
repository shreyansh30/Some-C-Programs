# include <stdio.h>

int main() 
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int n1 = 2, n2 = 1, n3;  
    if (n > 1)
	{  
	printf("%d ",n2);
    for(int i = 2; i <= n; ++i)
	{  
        n3 = n2;  
        n2 += n1;  
        n1 = n3;  
		printf("%d ",n2);
    } 
		printf("\n");
    }  
    else if (n == 1)
    {
	printf("%d ",n2);		
	printf("\n");		   
    }
}  
