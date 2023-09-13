#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The number to begin counting at.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n <= 98; n++)
{
if (n == 98)
{
printf("%d\n", n);
}
else
{
printf("%d, ", n);
}
}
}
else if (n > 98)
{
for (n = n; n >= 98; n--)
{
if (n == 98)
{
printf("%d\n", n);
}
else
{
printf("%d, ", n);
}
}
}
else
{
printf("%d\n", n);
}
}
