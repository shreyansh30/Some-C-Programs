#include <stdio.h>

int main()
{
    int i,n,max,smax;
    int a[10];

    printf("Input the number of elements : ");
    scanf("%d",&n);

    printf("Input %d elemnts in the array\n",n);

    for (i = 0; i < n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }

    if (max>smax)
        {
            max=a[0];
            smax=a[1];
        } 

    else
        {
            max = a[1];
            smax = a[0];
        }

    for (i = 2; i < n; i++)
    {
        if (max<a[i])
        {
            smax=max;
            max=a[i];
        }

        else if(smax<a[i])
        {
            smax = a[i];
        }    
    }

    printf("The Second largest element in array is : %d",smax);
    
}