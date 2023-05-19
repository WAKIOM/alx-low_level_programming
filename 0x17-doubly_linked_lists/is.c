#include "lists.h"

/**
 * is_palindrome - Checks if a number is a palindrome.
 * @num: The number to check.
 *
 * Return: 1 if @num is a palindrome, 0 otherwise.
 */
int is_palindrome(int num)
{
    int reversed = 0;
    int original = num;

    while (num > 0)
    {
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }

    return original == reversed;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	FILE *file;
    int largest_palindrome = 0;
    int i, j;

    for (i = 100; i < 1000; i++)
    {
        for (j = 100; j < 1000; j++)
        {
            int product = i * j;

            if (is_palindrome(product) && product > largest_palindrome)
            {
                largest_palindrome = product;
            }
        }
    }

    file = fopen("102-result", "w");
    fprintf(file, "%d", largest_palindrome);
    fclose(file);

    return 0;
}
