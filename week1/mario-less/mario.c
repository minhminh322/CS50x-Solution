#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Prompt user input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // print pyramid height
    for (int i = 0; i < height; i++)
    {
        // print dots (spacing)
        for (int dots = 0; dots < height - i - 1; dots++)
        {
            printf(" ");
        }
        // print hash
        for (int hash = 0; hash < i + 1; hash++)
        {
            printf("#");
        }
        printf("\n");
    }

}