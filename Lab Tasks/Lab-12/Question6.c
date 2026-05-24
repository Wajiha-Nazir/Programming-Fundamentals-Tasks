#include <stdio.h>

int digitalRoot(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Digital Root = %d\n", digitalRoot(num));
    return 0;
}

int digitalRoot(int n) {
    if (n < 10)
        return n;  
    int sum = 0;
    while (n > 0) {  
        sum += n % 10;
        n /= 10;
    }
    return digitalRoot(sum);  
}
