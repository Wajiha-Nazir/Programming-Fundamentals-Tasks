#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    int length = strlen(s);
    if (s[length - 1] == '\n') {
        s[length - 1] = '\0';
        length--;
    }
    reverseString(s, length);
    printf("Reversed string: %s\n", s);
    return 0;
}

