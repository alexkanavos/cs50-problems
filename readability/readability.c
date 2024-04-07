#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text;
    int letters_count = 0;
    int words_count = 1;
    int sentences_count = 0;

    text = get_string("Text: ");

    for (int i = 0; text[i] != '\0'; i++)
    {

        if ((text[i] >= 'A' && text[i] <= 'Z') | (text[i] >= 'a' && text[i] <= 'z'))
        {
            letters_count++;
        }
        else if (text[i] == '.' | text[i] == '?' | text[i] == '!')
        {
            sentences_count++;
        }
        else if (text[i] == ' ')
        {
            words_count++;
        }
    }
    float L = 100.0 * letters_count / words_count;
    float S = 100.0 * sentences_count / words_count;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade %i\n", 1);
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
