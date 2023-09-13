#include <stdio.h>

/**
 * fibonacci - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * @n: The number to be checked.
 *
 * Return: Always 0.
 */
int fibonacci(int n)
{
    if (n <= 1)
        return (n);
    
    unsigned long prev = 0;
    unsigned long curr = 1;

    for (int i = 2; i <= n; ++i)
    {
        unsigned long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return (curr);    
}

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * @whyte: The number to be checked.
 * Return: Always 0.
 */
int main(void)
{
int whyte;

for (whyte = 0; whyte < 50; ++whyte)
{
printf("%u", fibonacci(whyte));
if (whyte != 49)
{
printf(", ");
}
}
printf("\n");
return (0);
}
