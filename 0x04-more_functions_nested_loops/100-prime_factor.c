#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
long n = 612852475143;
long i = 2;
long max = 0;

while (n != 1)
{
if (n % i == 0)
{
n = n / i;
max = i;
}
i = i + 1;
}
printf("%ld\n", max);
return (0);
}