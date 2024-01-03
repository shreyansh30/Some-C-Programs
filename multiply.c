#include <stdio.h>

int main()
{
    int i,n,m=1;
    int a[10];
    
    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter array elements : ");

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        m=m*a[i];
    }

    printf("Product of the array elements = %d",m);
    
}
