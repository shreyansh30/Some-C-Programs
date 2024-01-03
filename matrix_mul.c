#include <stdio.h>

int main()
{
    float m1[3][3];
    float m2[3][3];
    float m[3][3];

    printf("Enter value of matrix a : ");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &m1[i][j]);
        }
    }

    printf("Enter value of matrix b : ");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &m2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                m[i][j] = m[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }

    printf("After Multiplication resultant matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f\t",     m[i][j]);
        }
        printf("\n");
    }
}
