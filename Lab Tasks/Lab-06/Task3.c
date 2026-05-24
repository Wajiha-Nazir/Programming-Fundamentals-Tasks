#include <stdio.h>

int main() {
    int num, first, last, sum;
    printf("Enter a number:\t");
    scanf("%d", &num);
    last = num % 10;  
    for (; num >= 10; num = num / 10) {
    }
    first = num; 
    sum = first + last;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}

