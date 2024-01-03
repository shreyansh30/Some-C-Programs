#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int c=n%2;
    if (c==0)
    {
        printf("%d is even number",n);
    }
    
    else
    {
        printf("%d is odd number",n);
    }
    
    return 0;
}
