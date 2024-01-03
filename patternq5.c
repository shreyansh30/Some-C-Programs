#include <stdio.h>

int main()
{
    int i, j, n,r=1;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i==r)
        {
            for(j=1; j<=i; j++)
            {
                printf("%d", j);
            }
            r=r+2;
        }
        else
        {
            for(j=i; j>=1; j--)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}