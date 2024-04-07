#include <cs50.h>
#include <stdio.h>

int main()
{
    long number = 0;
    long temp = 0;
    long first_two = 0;
    int digit = 0;
    int sum_digits = 0;
    int product_sum = 0;
    int total_sum = 0;
    int length = 0;

    number = get_long("Number: ");

    long x = number;

    while (x != 0)
    {
        x = x / 10;
        length++;
    }

    temp = number;
    temp = number / 10;

    while (temp != 0)
    {
        digit = 2 * (temp % 10);
        if (digit > 9)
        {
            product_sum += digit % 10 + digit / 10;
        }
        else
        {
            product_sum += digit;
        }
        temp = temp / 100;
    }

    temp = number;
    digit = 0;

    while (temp != 0)
    {
        digit = temp % 10;
        sum_digits += digit;
        temp = temp / 100;
    }

    total_sum = sum_digits + product_sum;

    first_two = number;
    while (first_two >= 100)
    {
        first_two /= 10;
    }

    if ((total_sum % 10 == 0))
    {
        if ((first_two == 34 | first_two == 37) && (length == 15))
        {
            printf("AMEX\n");
        }
        else if ((first_two == 51 | first_two == 52 | first_two == 53 | first_two == 54 |
                  first_two == 55) &&
                 (length == 16))
        {
            printf("MASTERCARD\n");
        }
        else if ((first_two / 10 == 4) && (length == 13 | length == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
