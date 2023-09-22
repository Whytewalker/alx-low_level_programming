#include "main.h"

/**
 * _strcat - concatenate two strings using pointers
 * @dest: string to be appended
 * @src: string to append
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (*(dest + i))
i++;
for (j = 0; *(src + j); j++)
*(dest + i + j) = *(src + j);
*(dest + i + j) = '\0';
return (dest);
}
