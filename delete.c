#include <stdio.h>

int main()
{
    int i,n,j;
    int a[10];

    printf("Input the size of array : ");
    scanf("%d",&n);

    printf("Input %d elemnts in the array in ascending order :\n",n);

    for (i = 0; i < n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }

    int l;
    printf("Input the position where to delete : ");
    scanf("%d",&l);
    int p;
    p=l-1;

    for (i = p; i < n; i++)
    {
        a[i]=a[i+1];
    }
    n--;

    printf("The new list is : ");

    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    

}