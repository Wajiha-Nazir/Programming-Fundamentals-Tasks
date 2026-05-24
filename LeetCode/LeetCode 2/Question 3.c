#include <stdio.h>

int removeDuplicates(int nums[], int n);

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array must have at least one element.\n");
        return 0;
    }
    int nums[n];
    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int k = removeDuplicates(nums, n);
    printf("Number of unique elements: %d\n", k);
    printf("Array after removing duplicates: ");
    for (i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0; 
    int k = 1, i; 
    for (i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k; 
}
