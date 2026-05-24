#include <stdio.h>

float calculateAverage(float s1, float s2, float s3);
void checkResult(float s1, float s2, float s3);


int main() {
    float a, b, c;
    printf("Enter marks of 3 subjects: ");
    printf("\nSubject 1: ");
    scanf("%f", &a);
    printf("Subject 2: ");
    scanf("%f", &b);
    printf("Subject 3: ");
    scanf("%f", &c);
    checkResult(a, b, c);
    return 0;
}

float calculateAverage(float s1, float s2, float s3) {
    return (s1 + s2 + s3) / 3;
}

void checkResult(float s1, float s2, float s3) {
    float avg = calculateAverage(s1, s2, s3);
    if (avg >= 50 && s1 >= 40 && s2 >= 40 && s3 >= 40)
        printf("Average: %.2f\nPASS\n", avg);
    else {
        printf("Average: %.2f\nFAIL: ", avg);
        if (avg < 50)
            printf("Average below 50\n");
        else
            printf("One or more subjects below 40\n");
    }
}

