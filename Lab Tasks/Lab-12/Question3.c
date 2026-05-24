#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int marks;
} Student;

int main() {
    int n, i;
    Student *s;
    printf("Enter number of students: ");
    scanf("%d", &n);

    s = (Student*)malloc(n * sizeof(Student));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter marks of %s: ", s[i].name);
        scanf("%d", &s[i].marks);
    }

    printf("\nStudents scoring more than 75:\n");
    for (i = 0; i < n; i++) {
        if (s[i].marks > 75) {
            printf("%s - %d\n", s[i].name, s[i].marks);
        }
    }
    free(s); 
    return 0;
}

