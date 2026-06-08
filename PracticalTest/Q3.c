



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