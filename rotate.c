#include <stdio.h>

int main()
{
    int i,j=0,n;
    int a[10],b[10];
    
    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Array = ");

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int d,e;
    printf("d = ");
    scanf("%d",&d);
    
    for (i = d; i < n; i++)
    {
        b[j] = a[i];
        j++;
    }

    for (i = 0; i < d; i++)
    {
        b[j] = a[i];
        j++;
    }
    
    
/*
    for (i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    

    for (i = 0; i < n; i++)
    {
        if (i<d)
        {
            a[i]=a[e];
            e++;
        }

        else if (i==d)
        {
            a[i]=a[e];
        }

        else
        {
            j=0;
            a[i] = b[j];
            j++;
        }
    }
*/
    for (i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    
    
}