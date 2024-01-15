#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*ptr,min;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    ptr = (int*) malloc(n*sizeof(int));  

    for ( i = 0; i < n; i++) 
    {
        scanf("%d",ptr + i);  
    }

    min = *ptr;

    for ( i = 1; i < n; i++)
    {
        if (min > *(ptr + i))
        {
            min = *(ptr + i);
        }    
    }
    
    
}