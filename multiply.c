#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    int mul;

    printf("Enter the first number : ");
    scanf("%d",&n1);

    printf("Enter the second number : ");
    scanf("%d",&n2);

    int *pn1 = &n1;
    int *pn2 = &n2;

    mul = (*pn1)*(*pn2);
    printf("Multiple of those numbers = %d",mul);

}