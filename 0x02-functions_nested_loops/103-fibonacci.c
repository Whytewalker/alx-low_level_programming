#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always return 0.
 */
int main(void)
{
long long first = 1, second = 2, next;
long long sum = 0;

while (second <= 4000000)
{
if (second % 2 == 0)
{
sum += second;
}
next = first + second;
first = second;
second = next;
}
printf("%lld\n", sum);

return (0);
}
