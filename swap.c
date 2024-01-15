#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    int temp;

    printf("Enter the first number : ");
    scanf("%d",&n1);

    printf("Enter the second number : ");
    scanf("%d",&n2);

    int *pn1 = &n1;
    int *pn2 = &n2;

    temp = *pn1;
    *pn1 = *pn2;
    *pn2 = temp;

    printf("Before Swapping : \nn1 = %d\nn2 = %d",n1,n2);
    printf("\nAfter Swapping : \nn1 = %d\nn2 = %d",*pn1,*pn2);

    

}