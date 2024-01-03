#include<stdio.h>

int main()
{
    int n,sum,sum1=0,i,j;

    printf("Enter value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=i;j++)
        {
            sum=sum+j;
        }
        sum1=sum1+sum;
    }

    printf("The Sum of Series is : %d",sum1);

}