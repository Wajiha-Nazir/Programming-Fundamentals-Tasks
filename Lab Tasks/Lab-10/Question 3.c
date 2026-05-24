#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[100];
    int length, vowels=0, digits=0, space=0, consonent=0, i;

    printf("text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    length = strlen(text);

    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u' ||
           text[i]=='A' || text[i]=='E' || text[i]=='I' || text[i]=='O' || text[i]=='U')
        {
            vowels++;
        }
        else if(isdigit(text[i]))
        {
            digits++;
        }
        else if(text[i] == ' ')
        {
            space++;
        }
        else if(isalpha(text[i]))
        {
            consonent++;
        }
    }

    printf("Statistics:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonents: %d\n", consonent);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", space);
    printf("Total Characters: %d\n", length);

    return 0;
}

