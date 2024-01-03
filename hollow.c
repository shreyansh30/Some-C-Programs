#include<stdio.h>
 
int main()
{
    int side, i, j;
     
    printf("Enter side of square : ");
    scanf("%d", &side);
     
    for(i = 0; i < side; i++){
     
        for(j = 0; j < side; j++)
        {
            
            if(i==0 || i==side-1 || j==0 || j==side-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}