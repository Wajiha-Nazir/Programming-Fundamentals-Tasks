#include <stdio.h>

int main()
{
    int mark, i;
    int pass[10], fail[10], passCount = 0, failCount = 0;
    float passSum = 0, failSum = 0;
    printf("Enter quiz marks for students (enter -1 to stop):\n");
    for(i = 0; i < 10; i++)
    {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &mark);
        if(mark == -1)
            break;  
        if(mark >= 5 && mark <= 10)
        {
            pass[passCount++] = mark;
            passSum += mark;
        }
        else if(mark >= 0 && mark < 5)
        {
            fail[failCount++] = mark;
            failSum += mark;
        }
        else
        {
            printf("Invalid mark! Please enter between 0 and 10.\n");
            i--;
        }
    }
    printf("\nMarks of Passed Students (5-10): ");
    if(passCount == 0)
        printf("None");
    else
        for(i = 0; i < passCount; i++)
            printf("%d ", pass[i]);

    printf("\nMarks of Failed Students (0–4): ");
    if(failCount == 0)
        printf("None");
    else
        for(i = 0; i < failCount; i++)
            printf("%d ", fail[i]);
    if(passCount > 0)
        printf("\n\nAverage of Passed Students = %.2f", passSum / passCount);
    else
        printf("\n\nNo passed student marks entered.");

    if(failCount > 0)
        printf("\nAverage of Failed Students = %.2f\n", failSum / failCount);
    else
        printf("\nNo failed student marks entered.\n");
    return 0;
}

