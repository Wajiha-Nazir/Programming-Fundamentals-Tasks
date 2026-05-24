#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int roll;
    int marks[3];
    float percentage;
    char grade;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;
char calculateGrade(float percentage);
void addStudent();
void displayStudent(Student s);
void displayAllStudents();
void searchByRollOrName();
void findByGrade();
void classAverage();
void rankStudents();
int comparePercentage(const void *a, const void *b);

int main() {
    int choice;
    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll or Name\n");
        printf("4. Find Students by Grade\n");
        printf("5. Class Average & Above/Below Average\n");
        printf("6. Display Students by Rank\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayAllStudents(); break;
            case 3: searchByRollOrName(); break;
            case 4: findByGrade(); break;
            case 5: classAverage(); break;
            case 6: rankStudents(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 0);

    return 0;
}

char calculateGrade(float percentage) {
    if(percentage >= 90) return 'A';
    else if(percentage >= 80) return 'B';
    else if(percentage >= 70) return 'C';
    else if(percentage >= 60) return 'D';
    else if(percentage >= 50) return 'E';
    else return 'F';
}

void addStudent() {
	int i;
    if(student_count >= MAX_STUDENTS) {
        printf("Cannot add more students!\n");
        return;
    }
    Student s;
    printf("Enter student name: ");
    getchar(); 
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = 0; 
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    for(i = 0; i < 3; i++) {
        do {
            printf("Enter marks for subject %d (0-100): ", i+1);
            scanf("%d", &s.marks[i]);
            if(s.marks[i] < 0 || s.marks[i] > 100)
                printf("Invalid marks! Please enter between 0 and 100.\n");
        } while(s.marks[i] < 0 || s.marks[i] > 100);
    }
    s.percentage = (s.marks[0] + s.marks[1] + s.marks[2]) / 3.0;
    s.grade = calculateGrade(s.percentage);
    students[student_count++] = s;
    printf("Student added successfully!\n");
}

void displayStudent(Student s) {
    printf("Name: %s, Roll: %d, Marks: [%d, %d, %d], Percentage: %.2f, Grade: %c\n",
           s.name, s.roll, s.marks[0], s.marks[1], s.marks[2], s.percentage, s.grade);
}

void displayAllStudents() {
	int i;
    if(student_count == 0) {
        printf("No students to display.\n");
        return;
    }
    for(i = 0; i < student_count; i++)
        displayStudent(students[i]);
}

void searchByRollOrName() {
    if(student_count == 0) {
        printf("No students to search.\n");
        return;
    }
    int choice;
    printf("Search by 1. Roll 2. Name: ");
    scanf("%d", &choice);
    if(choice == 1) {
    	int i;
        int roll;
        printf("Enter roll number: ");
        scanf("%d", &roll);
        for(i = 0; i < student_count; i++)
            if(students[i].roll == roll)
                displayStudent(students[i]);
    } else if(choice == 2) {
    	int i;
        char name[50];
        printf("Enter name: ");
        getchar();
        fgets(name, 50, stdin);
        name[strcspn(name, "\n")] = 0;
        for(i = 0; i < student_count; i++)
            if(strcmp(students[i].name, name) == 0)
                displayStudent(students[i]);
    } else {
        printf("Invalid choice!\n");
    }
}

void findByGrade() {
	int i;
    if(student_count == 0) {
        printf("No students to search.\n");
        return;
    }
    char grade;
    printf("Enter grade (A-F): ");
    getchar();
    scanf("%c", &grade);
    for(i = 0; i < student_count; i++)
        if(students[i].grade == grade)
            displayStudent(students[i]);
}

void classAverage() {
	int i;
    if(student_count == 0) {
        printf("No students to calculate average.\n");
        return;
    }
    float total = 0;
    for(i = 0; i < student_count; i++)
        total += students[i].percentage;
    float avg = total / student_count;
    printf("Class Average: %.2f\n", avg);
    printf("Students above average:\n");
    for(i = 0; i < student_count; i++)
        if(students[i].percentage > avg)
            displayStudent(students[i]);
    printf("Students below average:\n");
    for(i = 0; i < student_count; i++)
        if(students[i].percentage < avg)
            displayStudent(students[i]);
}

int comparePercentage(const void *a, const void *b) {
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;
    if(s2->percentage > s1->percentage) return 1;
    else if(s2->percentage < s1->percentage) return -1;
    else return 0;
}

void rankStudents() {
	int i;
    if(student_count == 0) {
        printf("No students to rank.\n");
        return;
    }

    qsort(students, student_count, sizeof(Student), comparePercentage);

    printf("Ranked Students:\n");
    for(i = 0; i < student_count; i++) {
        printf("Rank %d: ", i+1);
        displayStudent(students[i]);
    }
}

