#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

bool only_digits(string s);
char rotate(char input, int key);

int main(int argc, string argv[])
{
    // Check command line arguments
    if (argc != 2 || only_digits(argv[1]) == false) {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Get the key
    int key = atoi(argv[1]);

    // Prompt user input for plaintext
    string plaintext = get_string("plaintext: ");

    // Encrypt the text
    printf("ciphertext: ");
    int len = strlen(plaintext);
    for (int i=0; i < len; i++) {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");

    // return
    return 0;

}

bool only_digits(string s) {
    for (int i = 0; i < strlen(s); i++) {
        if (isdigit(s[i]) == false) {
            return false;
        }
    }

    return true;
}

char rotate(char input, int key) {
    if (isalpha(input)) {
        if (isupper(input)) {
            int index = input - 'A';
            int remainder = (index + key) % 26;
            return 'A' + remainder;
        } else {
            int index = input - 'a';
            int remainder = (index + key) % 26;
            return 'a' + remainder;
        }
    }
    return input;
}