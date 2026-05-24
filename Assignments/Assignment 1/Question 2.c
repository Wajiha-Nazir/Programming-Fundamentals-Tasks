#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    int size = 2 * n;
    int nums[size], result[size];
    printf("Enter %d numbers:\n", size);
    i = 0;
    while (i < size) {
        scanf("%d", &nums[i]);
        i++;
    }
    i = 0;
    int j = 0, k = n;
    while (i < size) {
        result[i] = nums[j];
        result[i + 1] = nums[k];
        j++;
        k++;
        i += 2;
    }
    printf("Shuffled array: ");
    i = 0;
    while (i < size) {
        printf("%d ", result[i]);
        i++;
    }
    return 0;
}

