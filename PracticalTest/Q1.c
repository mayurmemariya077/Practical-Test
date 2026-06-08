



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