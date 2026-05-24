#include <stdio.h>

int main()
{
    char names[5][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    int marks[5] = {85, 92, 78, 96, 88};
    int highestMarks = marks[0], i, highestIndex = 0, sum = 0;
    printf("Student Marks:\n");
    printf("Name\t\tMarks\n");
    printf("-------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%-10s\t%d\n", names[i], marks[i]);
        sum += marks[i];

        if (marks[i] > highestMarks)
        {
            highestMarks = marks[i];
            highestIndex = i;
        }
    }
    float average = sum / 5.0;
    printf("\nHighest Scorer: %s with %d marks\n", names[highestIndex], highestMarks);
    printf("Class Average: %.2f\n", average);
    return 0;
}


