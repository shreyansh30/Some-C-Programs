#include <stdio.h>

int main()
{
    int i,n,s;
    int a[10];
    
    printf("Enter number of elements : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to search : ");
    scanf("%d",&s);

    for (i = 0; i < n; i++)
    {
        if (a[i]==s)
        {
            printf("Number found at position = %d",i+1);
        }
        
    }
    

    
    
}
