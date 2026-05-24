#include <stdio.h>

int main() {
    int temperature[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };
    
    int i, j;
    
    // Display grid
    printf("Temperature Grid:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", temperature[i][j]);
        }
        printf("\n");
    }

    printf("\nCold Spots Found:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            int current = temperature[i][j];
            int isCold = 1;
            if (i > 0 && temperature[i - 1][j] <= current)
                isCold = 0;
            if (i < 3 && temperature[i + 1][j] <= current)
                isCold = 0;
            if (j > 0 && temperature[i][j - 1] <= current)
                isCold = 0;
            if (j < 3 && temperature[i][j + 1] <= current)
                isCold = 0;
            if (isCold)
                printf("At position (%d,%d) with temperature %d°C\n", i + 1, j + 1, current);
        }
    }
    return 0;
}




