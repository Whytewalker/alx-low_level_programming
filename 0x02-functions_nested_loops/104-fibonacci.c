#include <stdio.h>

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
int i, n = 98;
int a = 1, b = 2;

printf("%d, %d, ", a, b);

for (i = 2; i < n; i++)
{
int c = a + b;
printf(", %d", c);

a = b;
b = c;
}

printf("\n");

return (0);
}
