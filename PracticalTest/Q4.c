



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