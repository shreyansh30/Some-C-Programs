#include <stdio.h>

int main()
{
    int i,j,n;
    int a[10];
    
    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter array elements : ");

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int m = n/2,me;
    int c=0;

    for (i = 0; i < n; i++)
    {
        j=0;
        if (a[i]==a[j])
        {
            c++;
            me=a[i];
        }  
        j++;     
    }

    if (c>=m)
    {
        printf("%d",me);
    }
    
    
}