#include <stdio.h>

#define ROWS 3
#define COLS 4

void printAllElements(int *ptr, int totalElements);
void printSecondRowWithIndexing(int *ptr);
void printMultiplesOfThree(int *ptr, int totalElements);
void printLastElement(int *ptr, int totalElements);

int main() {
    int grid[ROWS][COLS], value = 1, i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            grid[i][j] = value++;
        }
    }
    int totalElements = ROWS * COLS;
    int *p1 = &grid[0][0];     
    int *p2 = &grid[1][0];      
    printAllElements(p1, totalElements);
    printSecondRowWithIndexing(p2);
    printMultiplesOfThree(p1, totalElements);
    printLastElement(p1, totalElements);
    return 0;
}

void printAllElements(int *ptr, int totalElements) {
	int i;
    printf("Elements accessed using pointer arithmetic:\n");
    for (i = 0; i < totalElements; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n\n");
}

void printSecondRowWithIndexing(int *ptr) {
	int i;
    printf("Elements accessed using second row pointer and positive indexing:\n");
    for (i = 0; i < COLS; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    printf("Elements accessed using second row pointer and negative indexing:\n");
    for (i = -1; i >= -COLS; i--) {
        printf("%d ", ptr[i]); 
    }
    printf("\n\n");
}

void printMultiplesOfThree(int *ptr, int totalElements) {
	int i;
    printf("Elements divisible by 3:\n");
    for (i = 0; i < totalElements; i++) {
        if (*(ptr + i) % 3 == 0) {
            printf("%d ", *(ptr + i));
        }
    }
    printf("\n\n");
}

void printLastElement(int *ptr, int totalElements) {
    printf("Last element of the grid: %d\n", *(ptr + totalElements - 1));
}
