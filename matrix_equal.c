#include <stdio.h>

int main()
{

    int a[10][10], b[10][10];
    int i, j, row, column, flag = 1;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    printf("Enter number of columns : ");
    scanf("%d", &column);

    printf("Enter the elements of matrix A \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of matrix B \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("MATRIX A is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    printf("MATRIX B is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }

    if (row == row && column == column)
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag == 1)
        printf("Matrix A and B are equal \n");
    else
        printf("Matrix A and B are not equal \n");
}