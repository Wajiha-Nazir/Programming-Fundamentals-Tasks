#include <stdio.h>
#include <string.h>

int main()
{
    char email[50], choice;
    int length, i, found;
    printf("Email Domain Extraction:\n");
    do
    {        
        printf("Email: ");
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = '\0';
        found = 0;
        for(i = 0; email[i] != '\0'; i++)
        {
            if(email[i] == '@')
            {
                found = 1;
                printf("Domain: %s\n", email + i + 1);
                break;
            }
        }
        if(found == 0)
            printf("Invalid Email (No @ found)\n");
        printf("Do you Want to Continue (Y/N): ");
        scanf(" %c", &choice);
        while(getchar() != '\n');
    } 
	while(choice == 'Y' || choice == 'y');
    return 0;
}

