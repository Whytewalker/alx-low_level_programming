#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * separated by a comma and a space
 * Return: 0
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(i);

if (i == 57)
continue;

putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
