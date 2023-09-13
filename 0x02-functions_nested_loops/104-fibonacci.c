#include <stdio.h>

/**
 * main - Entry point. Prints the first 50 Fibonacci numbers, starting with 1
 * and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
long int a = 1, b = 2, c = 0;
int i;

printf("%ld, %ld, ", a, b);
for (i = 0; i < 48; i++)
{
c = a + b;
printf("%ld", c);
if (i != 47)
{
printf(", ");
}
a = b;
b = c;
}
printf("\n");

return (0);
}
