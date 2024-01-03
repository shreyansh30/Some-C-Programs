#include <stdio.h>

int main()
{
    int c,d;
    int arr[2][10]; 
    
    printf("Enter no of city : ");
    scanf("%d",&c);

    printf("Enter no of days : ");
    scanf("%d",&d);

    for (int i = 0; i < c; ++i)
    {
        for (int j = 0; j < d; ++j)
        {
            printf("Temperature of City %d, Day %d = ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for ( int i = 0; i < c; i++)
    {
        for ( int j = 0; j < d; j++)
        {
            printf("City %d, Day %d = %d\n",i+1,j+1,arr[i][j]);
        }
    }
}
