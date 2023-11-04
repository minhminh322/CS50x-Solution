#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float l = (float) letters / words * 100;
    float s = (float) sentences / words * 100;

    int result = round(0.0588 * l - 0.296 * s - 15.8);

    if (result >= 16) {
        printf("Grade 16+\n");
    } else if (result < 1) {
        printf("Before Grade 1\n");
    } else {
        printf("Grade %i\n", result);
    }

}

int count_letters(string text) {
    int result = 0;
    int len = strlen(text);
    for (int i = 0; i < len; i++) {
        if (isalpha(text[i])) {
            result += 1;
        }
    }
    return result;
}

int count_words(string text) {
    int result = 1;
    int len= strlen(text);

    for (int i = 0; i < len; i++) {
        if (text[i] == ' ') {
            result += 1;
        }
    }
    return result;
}

int count_sentences(string text) {
    int result = 0;
    int len= strlen(text);

    for (int i = 0; i < len; i++) {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!') {
            result += 1;
        }
    }
    return result;
}