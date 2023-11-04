#include <cs50.h>
#include <stdio.h>
#include <string.h>

// #define BITS_IN_BYTE 8
const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Prompt user to get message string
    string message = get_string("Message: ");
    int len = strlen(message);

    // Iterate through each character
    for (int i = 0; i < len; i++) {
        // Get the  ascii value
        int ascii_value = message[i];

        // Convert to binary
        // Beginner method
        // int binary[BITS_IN_BYTE];
        // for (int j = BITS_IN_BYTE - 1; j >= 0; j--) {
        //     int remainder = ascii_value % 2;
        //     binary[j] = remainder;
        //     ascii_value = ascii_value / 2;
        // }

        // Pro method
        int binary[BITS_IN_BYTE] = {0};
        int j = BITS_IN_BYTE - 1;
        while (ascii_value > 0) {
            int remainder = ascii_value % 2;
            binary[j] = remainder;
            ascii_value = ascii_value / 2;
            j -= 1;
        }

        // Print bulbs
        for (int k = 0; k < BITS_IN_BYTE; k++) {
            print_bulb(binary[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
