#include <stdio.h>

void manipulateValues(int *p1, int *p2, int *p3);

int main() {
    int a = 100, b = 200, c = 300;

    printf("Initial values:\n");
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);
    manipulateValues(&a, &b, &c);
    printf("Final values after pointer manipulations:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    return 0;
}

void manipulateValues(int *p1, int *p2, int *p3) {
    int *temp;
    temp = p1;
    p1 = p2;   
    p2 = p3;   
    p3 = temp; 
    *p1 += 50;  
    *p2 -= 30;  
    *p3 *= 2;    
    p1 = p3 + 2; 
    p1 = &(*p2); 
    p1 = p2;   
    p2 = p3;  
    p3 = p1 - 1; 
    *p1 += 10; 
    *p2 -= 20; 
    *p3 *= 3;  
}
