#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d numbers:\n", n);
    i = 0;
    while (i < n) {
        scanf("%d", &nums[i]);
        i++;
    }
    i = 0;
    while (i < n) {
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
        i++;
    }
    i = 0;
    while (i < n - 1) {
        j = 0;
        while (j < n - i - 1) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    printf("Result: ");
    i = 0;
    while (i < n) {
        printf("%d ", nums[i]);
        i++;
    }
    return 0;
}

