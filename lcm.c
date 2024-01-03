#include <stdio.h>

int main() {

    int n1, n2, max;

    printf("Enter two positive integers : ");
    scanf("%d %d", &n1, &n2);

    if (n1>n2)  
    {
        max = n1;
    }
    else 
    {
        max = n2;
    }
    

    while (1) 
    {
        if ((max % n1 == 0) && (max % n2 == 0)) 
        {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
}
