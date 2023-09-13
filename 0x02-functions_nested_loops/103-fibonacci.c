#include <stdio.h>

/**
 * main - find and print the sum of the even-valued terms
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long int j, k, next;

j = 1;
k = 2;
printf("%ld, ", j);
for (i = 1; i <= 48; i++)
{
if (i != 48)
{
printf("%ld, ", k);
}
else
{
printf("%ld\n", k);
}
next = j + k;
j = k;
k = next;
}
return (0);
}
