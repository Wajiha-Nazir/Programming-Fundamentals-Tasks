#include <stdio.h>

int main(void)
{
    int i, j, space;

    for (i = 1; i <= 5; i++)
    {
        for (space = 5; space > i; space--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf(" | ");
        for (space = 5; space > i; space--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf(" | ");
        for (space = 5; space > i; space--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%c", 'A' + j - 1);
        printf("\n");
    }
    return 0;
}

