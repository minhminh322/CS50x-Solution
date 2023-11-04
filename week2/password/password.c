// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool hasLower = false;
    bool hasUpper = false;
    bool hasNumber = false;
    bool hasSymbol = false;
    for (int i = 0; i < strlen(password); i++) {
        char c = password[i];
        if (islower(c)) {
            hasLower = true;
        } else if (isupper(c)) {
            hasUpper = true;
        } else if (isdigit(c)) {
            hasNumber = true;
        } else if (ispunct(c)) {
            hasSymbol = true;
        }
    }
    if (hasLower && hasUpper && hasNumber && hasSymbol) {
        return true;
    }
    return false;
}

