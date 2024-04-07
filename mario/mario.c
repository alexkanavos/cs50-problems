#include <stdio.h>

int main(void)
{
    int size;
    do
    {
        printf("How tall should the pyramids be? Type an integer between 1 and 8: ");
        scanf("%i", &size);
    }
    while (size < 1 || size > 8);

    for (int row = 1; row < size + 1; row++)
    {
        for (int i = size; i > row; i--)
        {
            printf(" ");
        }
        for (int first = 1; first < row + 1; first++)
        {
            printf("#");
        }
        printf("  ");
        for (int second = 1; second < row + 1; second++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
