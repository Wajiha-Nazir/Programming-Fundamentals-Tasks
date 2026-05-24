#include <stdio.h>
#include <string.h>

int main()
{
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    char courses[4][10][20] = {
        {"Math", "Physics", "English"},                          
        {"Biology", "Chemistry"},                             
        {"Math", "Physics", "Computer", "History"},          
        {"Math", "English", "Physics", "Chemistry", "Art"}      
    };
    int courseCount[4] = {3, 2, 4, 5}, i, j;
    printf("Student Course Registration:\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("%s is registered for: ", students[i]);
        for (j = 0; j < courseCount[i]; j++)
        {
            printf("%s", courses[i][j]);
            if (j < courseCount[i] - 1) printf(", ");
        }
        printf("\n");
    }
    char searchCourse[20] = "Physics";
    printf("\nStudents taking %s:\n", searchCourse);
    int found = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < courseCount[i]; j++)
        {
            if (strcmp(courses[i][j], searchCourse) == 0)
            {
                printf("- %s\n", students[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found) printf("No students are taking %s.\n", searchCourse);
    printf("\nOverloaded Students (more than 3 courses):\n");
    int overloadFound = 0;
    for (i = 0; i < 4; i++)
    {
        if (courseCount[i] > 3)
        {
            printf("- %s (%d courses)\n", students[i], courseCount[i]);
            overloadFound = 1;
        }
    }
    if (!overloadFound) printf("No students are overloaded.\n");
    return 0;
}

