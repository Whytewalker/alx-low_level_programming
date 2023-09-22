#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: the resulting string
 */
char *cap_string(char *s)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";
char *word;

for (i = 0; *(s + i); i++)
{
if (i == 0 && *(s + i) >= 'a' && *(s + i) <= 'z')
*(s + i) -= 32;
for (j = 0; sep[j]; j++)
{
if (*(s + i) == sep[j])
{
if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
{
word = s + i + 1;
*word -= 32;
}
}
}
}
return (s);
}
