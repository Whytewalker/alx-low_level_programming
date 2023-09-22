#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: the resulting string
 */
char *leet(char *s)
{
int i, j;

char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

for (i = 0; *(s + i); i++)
{
for (j = 0; letters[j]; j++)
{
if (*(s + i) == letters[j])
*(s + i) = numbers[j];
}
}
return (s);
}
