#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int size, i;
    printf("Enter maximum length of string: ");
    scanf("%d", &size);
    getchar(); 
    str = (char*)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter a string: ");
    fgets(str, size, stdin);
    int len = strlen(str);
    printf("Reverse: ");
    for (i = len - 1; i >= 0; i--) {
        if (str[i] != '\n') 
            printf("%c", str[i]);
    }

    free(str);
    return 0;
}

