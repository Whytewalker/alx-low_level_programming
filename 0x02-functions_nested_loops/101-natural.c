#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int limit = 1024;
int sum = 0;

for (int i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("The sum of all multiples of 3 and 5 below 1024 is: %d\n", sum);

return (0);
}
