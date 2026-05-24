#include <stdio.h>

struct Student {
    int age;
    char first_name[51];  
    char last_name[51];
    int standard;
};

int main() {
    struct Student s;
    printf("Enter Age:\t");
    scanf("%d", &s.age);
    printf("Enter First Name:\t");
    scanf("%50s", s.first_name); 
    printf("Enter Last Name:\t");
    scanf("%50s", s.last_name);
    printf("Enter Standard:\t");
    scanf("%d", &s.standard);
    printf("%d %s %s %d\n", s.age, s.first_name, s.last_name, s.standard);
    return 0;
}

