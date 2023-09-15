#include "main.h"

/**
 * print_more_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Always 0.
 */
void print_more_numbers(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
