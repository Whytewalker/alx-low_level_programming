#include "main.h"

/**
 * _strncat - concatenate two strings using pointers
 * @dest: string to be appended
 * @src: string to append
 * @n: number of bytes to be used from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (*(dest + i))
i++;
for (j = 0; j < n && *(src + j); j++)
*(dest + i + j) = *(src + j);
*(dest + i + j) = '\0';
return (dest);
}
