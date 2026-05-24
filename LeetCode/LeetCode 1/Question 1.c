#include <stdio.h>

int main() {
    int n, i, total;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n], result[n];
    printf("Enter %d numbers:\n", n);
    i = 0;
    while (i < n) {
        scanf("%d", &nums[i]);
        i++;
    }
    total = 0;
    i = 0;
    while (i < n) {
        total += nums[i];
        result[i] = total;
        i++;
    }
    printf("Running sum: ");
    i = 0;
    while (i < n) {
        printf("%d ", result[i]);
        i++;
    }
    return 0;
}

