// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string input);

int main(int argc, string argv[])
{
    // Check the command-line arguments
    if (argc != 2) {
        printf("Re-check your arguments\n");
        return 1;
    }


    // Write replace function
    printf("%s\n", replace(argv[1]));
}

string replace(string input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        switch (input[i]) {
            case 'a':
                input[i] = '6';
                break;
            case 'e':
                input[i] = '3';
                break;
            case 'i':
                input[i] = '1';
                break;
            case 'o':
                input[i] = '0';
                break;
            default:
                break;
        }
    }

    return input;

}
