#include <stdio.h>

int main() {
    int hasPrerequisite;
    int isCourseFull;
    printf("Enter 1 if prerequisite completed, 0 if not: ");
    scanf("%d", &hasPrerequisite);
    printf("Enter 1 if course is full, 0 if not: ");
    scanf("%d", &isCourseFull);
    if (hasPrerequisite == 1 && isCourseFull == 0)
        printf("Enrolled successfully\n");
    else if (hasPrerequisite == 0 && isCourseFull == 0) {
        printf("Cannot enroll: prerequisite missing\n");
    }
    else if (hasPrerequisite == 1 && isCourseFull == 1) {
        printf("Cannot enroll: course is full\n");
    }
    else if (hasPrerequisite == 0 && isCourseFull == 1) {
        printf("Cannot enroll: prerequisite missing and course is full\n");
    }
    return 0;
}

