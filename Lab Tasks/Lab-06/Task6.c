#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }
    printf("Sum of digits: ");
    while (rev != 0) {
        digit = rev % 10;
        sum += digit;
        rev = rev / 10;
        if (rev != 0)
            printf("%d+", digit);
        else
            printf("%d", digit);
    }
    printf(" = %d", sum);
    return 0;
}

