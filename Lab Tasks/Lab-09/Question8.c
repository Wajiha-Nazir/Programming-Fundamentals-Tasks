#include <stdio.h>

void pointerOperations(int *arr);

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    pointerOperations(arr);

    return 0;
}

void pointerOperations(int *arr) {
    int *ptr = arr;
    int *ptr2;

    printf("=== Pointer Array Operations ===\n");
    printf("1. *ptr: %d\n", *ptr);
    printf("2. *(ptr + 3): %d\n", *(ptr + 3));
    printf("3. ptr[2]: %d\n", ptr[2]);

    ptr = ptr + 4;
    printf("4. After ptr + 4: %d\n", *ptr);
    printf("5. ptr[1]: %d\n", ptr[1]);

    ptr2 = &arr[5];
    printf("6. *ptr2: %d\n", *ptr2);
    printf("7. ptr2[-2]: %d\n", ptr2[-2]);
}
