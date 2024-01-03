#include <stdio.h>

int main()
{
    float m1[2][2];
    float m2[2][2];
    float s[2][2];

    printf("Enter the value of 1st Matrix \n");
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d : ",i+1,j+1);
            scanf("%f",&m1[i][j]);
        }
        
    }

    printf("Enter the value of 2nd Matrix \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter b%d%d : ",i+1,j+1);
            scanf("%f",&m2[i][j]);
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            s[i][j] = m1[i][j] + m2[i][j];
        }
        
    }

    printf("Sum of Matrix : \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.1f\n",s[i][j]);
        }
        
    }
    
    
}
