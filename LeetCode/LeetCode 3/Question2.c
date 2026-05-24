#include <stdio.h>
#include <string.h>

int isPalindrome(char *s);

int main() {
    int n, i;
    printf("Enter number of words: ");
    scanf("%d", &n);
    char words[100][101];  
    printf("Enter the words:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    for (i = 0; i < n; i++) {
        if (isPalindrome(words[i])) {
            printf("Output: %s\n", words[i]);
            return 0;
        }
    }
    printf("Output: \"\"\n");
    return 0;
}

int isPalindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}
