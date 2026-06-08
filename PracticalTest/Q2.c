



#include <stdio.h>

float findAverage(int arr[2][3], int rows, int cols)
{
    int i, j, sum = 0;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    return (float)sum / (rows * cols);
}

int main()
{
    int arr[2][3];
    int i, j;
    float avg;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    avg = findAverage(arr, 2, 3);

    printf("\nAverage = %.2f", avg);

    return 0;
}