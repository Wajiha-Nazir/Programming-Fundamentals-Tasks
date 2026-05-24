#include <stdio.h>
#include <string.h>

int validatePassword(char password[100]);

int main() {
    char password[100]; 
    printf("Enter a password to validate: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0; 
    if (validatePassword(password)) {
        printf("Password is strong and meets all requirements.\n");
    } else {
        printf("Password is weak.\n");
    }

    return 0;
}

int validatePassword(char password[100]) 
{
    int length = strlen(password), hasUpperCase = 0, hasDigit = 0, hasSpecialChar = 0, i;
    if (length < 8)
	{
        printf("Password must be at least 8 characters long.\n");
        return 0;
    }
    for (i = 0; i < length; i++) 
	{
        if(isupper(password[i]))
        {
            hasUpperCase = 1;
        } 
		else if(isdigit(password[i]))
		{
            hasDigit = 1;
        } 
		else if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%') 
		{
            hasSpecialChar = 1;
        }
    }
    if (!hasUpperCase) 
	{
        printf("Password must contain at least one uppercase letter.\n");
        return 0;
    }
    if (!hasDigit) 
	{
        printf("Password must contain at least one digit.\n");
        return 0;
    }
    if (!hasSpecialChar) 
	{
        printf("Password must contain at least one special character (!, @, #, $, %%).\n");
        return 0;
    }
    return 1;
}
