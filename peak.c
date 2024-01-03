#include <stdio.h>

int main()
{
    int i,n;
    int a[10];
    
    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter array elements : ");

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int peak_element;

    for (i = 0; i < n-1; i++)
    {
        if (i=0)
        {
            if (a[i]>=a[i+1])
            {
                peak_element=a[i];
            }
            
        }

        else if (i=n-1)
        {
            if (a[i-1]<=a[i])
            {
                peak_element = a[i];
            }
            
        }
        
        else if (a[i-1]<=a[i] && a[i]>=a[i+1])
        {
            peak_element = a[i];
        }
        
    }
    
    printf("The peak element is : %d",peak_element);

}
