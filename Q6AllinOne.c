



// Question 1 


#include <stdio.h>

int main()
{
    int marks[5];
    int i, total = 0;
    float average;

    for(i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total = total + marks[i];
    }

    average = total / 5.0;

    printf("\nTotal Marks = %d", total);
    printf("\nAverage = %.2f", average);

    if(average >= 90)
    {
        printf("\nGrade = A");
    }
    else if(average >= 75)
    {
        printf("\nGrade = B");
    }
    else if(average >= 60)
    {
        printf("\nGrade = C");
    }
    else if(average >= 40)
    {
        printf("\nGrade = D");
    }
    else
    {
        printf("\nGrade = Fail");
    }

    return 0;
}



// Question 2 






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


// Question 3







#include <stdio.h>

void printOdd(int arr[], int size)
{
    int i;

    printf("\nOdd Elements are:\n");

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printOdd(arr, 5);

    return 0;
}



// Question 4






#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    int *ptr;

    for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("\nEven Elements are:\n");

    for(i = 0; i < 5; i++)
    {
        if(*(ptr + i) % 2 == 0)
        {
            printf("%d ", *(ptr + i));
        }
    }

    return 0;
}


// Question 5 



#include <stdio.h>

int main()
{
    int i, j, k;

    for(i = 10; i >= 6; i--)
    {
        for(k = 10; k > i; k--)
        {
            printf("  ");
        }

        for(j = i; j <= 10; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

