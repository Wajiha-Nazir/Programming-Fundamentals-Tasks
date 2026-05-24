#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][20];
    int marks[5], i, highest = -1, highestIndex = 0, sum = 0;

    printf("Enter names and marks for 5 students:\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d Name: ", i + 1);
        scanf("%s", names[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);

        sum += marks[i];

        if (marks[i] > highest)
        {
            highest = marks[i];
            highestIndex = i;
        }
    }

    printf("\nStudent Marks:\n");
    printf("Name\t\tMarks\n");
    printf("------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%-10s\t%d\n", names[i], marks[i]);
    }

    float average = sum / 5.0;

    printf("\nHighest Scorer: %s with %d marks\n", names[highestIndex], highest);
    printf("Average Marks: %.2f\n", average);

    return 0;
}



