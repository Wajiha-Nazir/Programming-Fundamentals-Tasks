#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isVowel(char c);
void reverseVowels(char *s);

int main() {
    char s[100000];  
    printf("Enter a string: ");
    scanf("%[^\n]", s);  
    reverseVowels(s);
    printf("Output: %s\n", s);

    return 0;
}

int isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

void reverseVowels(char *s) {
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) {
        while (left < right && !isVowel(s[left]))
            left++;
        while (left < right && !isVowel(s[right]))
            right--;
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}
