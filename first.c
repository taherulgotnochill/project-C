#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validatePassword(char password[])
{
    int hasDigit = 0, hasUpper = 0;
    int length = strlen(password);

    // Check minimum length
    if (length < 8)
    {
        return 0;
    }

    // Traverse the string
    for (int i = 0; i < length; i++)
    {
        if (isdigit(password[i]))
        {
            hasDigit = 1;
        }
        if (isupper(password[i]))
        {
            hasUpper = 1;
        }
    }

    // Check all conditions
    if (hasDigit && hasUpper)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char password[100];

    printf("Enter your password: ");
    scanf("%s", password);

    if (validatePassword(password))
    {
        printf("Password is STRONG ✅\n");
    }
    else
    {
        printf("Password is WEAK ❌\n");
        printf("It must be at least 8 characters long,\n");
        printf("contain at least one digit and one uppercase letter.\n");
    }

    return 0;
} 


