#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum = 0,*ptr;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    ptr = (int*) malloc(n*sizeof(int));  

    for ( i = 0; i < n; i++) 
    {
        scanf("%d",ptr + i);  
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);  
    }

    printf("%d",sum); 
}