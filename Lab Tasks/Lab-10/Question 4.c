#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char text[], char encrypted[]);

void decrypt(char text[], char decrypted[]);

int main()
{
    char text[100], encrypted[100], decrypted[100];

    printf("Enter message: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    encrypt(text, encrypted);
    decrypt(encrypted, decrypted);

    printf("\nOriginal: %s\n", text);
    printf("Encrypted: %s\n", encrypted);
    printf("Decrypted: %s\n", decrypted);

    return 0;
}

void encrypt(char text[], char encrypted[])
{
    int i;
    for(i = 0; text[i] != '\0'; i++)
    {
        char ch = text[i];

        if(ch >= 'a' && ch <= 'z')
            encrypted[i] = ((ch - 'a' + 3) % 26) + 'a';

        else if(ch >= 'A' && ch <= 'Z')
            encrypted[i] = ((ch - 'A' + 3) % 26) + 'A';

        else
            encrypted[i] = ch;   // spaces, punctuation
    }
    encrypted[i] = '\0';
}

void decrypt(char text[], char decrypted[])
{
    int i;
    for(i = 0; text[i] != '\0'; i++)
    {
        char ch = text[i];

        if(ch >= 'a' && ch <= 'z')
            decrypted[i] = ((ch - 'a' - 3 + 26) % 26) + 'a';

        else if(ch >= 'A' && ch <= 'Z')
            decrypted[i] = ((ch - 'A' - 3 + 26) % 26) + 'A';

        else
            decrypted[i] = ch;
    }
    decrypted[i] = '\0';
}
