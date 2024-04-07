#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

const char LETTERS[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
const int POINTS[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
const int N = 2;

int main(void)
{
    int length = 26;
    int scores[N] = {0};
    string answers[N];
    for (int i = 0; i < N; i++)
    {
        answers[i] = get_string("Player %i: ", i + 1);
    }

    for (int i = 0; i < N; i++)
    {
        int an_len = strlen(answers[i]);
        for (int j = 0; j < an_len; j++)
        {
            int k = 0;
            while (toupper(answers[i][j]) != LETTERS[k])
            {
                k++;
            }
            scores[i] += POINTS[k];
        }
    }

    if (scores[0] > scores[1])
    {
        printf("Player 1 wins!\n");
    }

    else if (scores[0] < scores[1])
    {
        printf("Player 2 wins!\n");
    }

    else
    {
        printf("Tie!\n");
    }
}
