#include <stdio.h>
#include "math.h"

/**
 * prime_factor - prints the largest prime factor of a number
 * @n: The number to be checked
 * Return: Always 0.
 */
void prime_factor(long int n)
{
long int i, max;

max = -1;
while (n % 2 == 0)
{
max = 2;
n /= 2;
}
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
max = i;
n /= i;
}
}
if (n > 2)
max = n;
printf("%ld\n", max);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
prime_factor(1231952);
return (0);
}
