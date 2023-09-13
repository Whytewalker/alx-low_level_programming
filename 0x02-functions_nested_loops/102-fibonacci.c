#include <stdio.h>

/**
 * main - check the code
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