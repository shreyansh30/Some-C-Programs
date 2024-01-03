#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,c;
    int a[10];

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Input %d elemnts in the array\n",n);

    for (i = 0; i < n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j<i ; j++)
        {
            if (a[j]==a[i])
            {
                c++;
            }
        }
    }

    printf("Total number of duplicate elements found in array = %d",c);
}
