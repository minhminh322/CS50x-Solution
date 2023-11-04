#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
bool validate(string);
string substitute(string, char[]);
int main(int argc, string argv[])
{

    // Validate user input
    if (argc != 2) {
        printf("Invalid argument\n");
        return 1;
    }
    string key = argv[1];
    if (!validate(key)) {
        printf("Invalid key\n");
        return 1;
    }

    // Populate data
    string userText = get_string("plaintext: ");

    // Fill the array keys
    char keys[26];
    for (int i = 0; i < strlen(key); i++) {
        keys[i] = toupper(key[i]);
    }
    // Manipulate data

    printf("ciphertext: %s\n", substitute(userText, keys));

}

bool validate(string key) {

    int len = strlen(key);
    if (len != 26) {
        return false;
    }

    int alphaCheck[26] = {0};
    for (int i = 0; i < len; i++) {
        if (!isalpha(key[i])) {
            return false;
        }
        int val = toupper(key[i]) - 'A';
        alphaCheck[val] += 1;
    }
    for (int i = 0; i < 26; i++) {
        if (alphaCheck[i] != 1) {
            return false;
        }
    }

    return true;
}

string substitute(string text, char keys[]) {

    for (int i = 0; i < strlen(text); i++) {
        char c = text[i];

        if (isalpha(c)) {
            if (isupper(c)) {
                text[i] = keys[text[i]-'A'];
            } else {
                text[i] = tolower(keys[text[i]-'a']);
            }
        }
    }

    return text;
}