#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, i;
    arr = (int*)calloc(5, sizeof(int));
    printf("Array after calloc (all values should be 0):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < 5; i++) {
        arr[i] = i + 10;
    }
    printf("\nArray after modifying values:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    arr = (int*)malloc(5 * sizeof(int));
    printf("\n\nNew array after malloc:\n");
    for (i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 100;
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

