#include <stdio.h>

int main() {
    int a, b, i, mul = 0, div = 0, c;
    printf("Enter first number:\t");
    scanf("%d", &a);
    printf("Enter second number:\t");
    scanf("%d",&b);
    for (i = 0; i < b; i++) {
        mul = mul + a;
    }
    c = a;
    while (c >= b) {
        c = c - b;
        div++;
    }
    printf("\nMultiplication = %d", mul);
    printf("\nDivision = %d", div);
    return 0;
}

