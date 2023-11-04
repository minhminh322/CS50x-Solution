#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    // input must be greater or euqal to 9
    int startSize;
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    // input must be greater or equal to starting population
    int endSize;
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold
    int currentSize = startSize;
    int counter = 0;
    while (currentSize < endSize)
    {
        currentSize += (int)(currentSize / 3) - (int)(currentSize / 4);
        counter += 1;
    }

    // TODO: Print number of years
    printf("Years: %i\n", counter);



}
