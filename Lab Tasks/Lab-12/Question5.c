#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *result;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    result = (char*)malloc(strlen(str1) + strlen(str2) + 1);
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    strcpy(result, str1);
    strcat(result, str2);
    printf("\nConcatenated String: %s\n", result);
    free(result);
    return 0;
}

