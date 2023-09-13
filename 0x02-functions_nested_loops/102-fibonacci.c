#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 50;
long long first = 1, second = 2, next;

printf("%lld, %lld, ", first, second);

for (int i = 2; i < n; i++)
{
next = first + second;
printf("%lld", next);

first = second;
second = next;
}
printf("\n");

return (0);
}
