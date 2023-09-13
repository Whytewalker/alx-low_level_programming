#include "main.h"

/**
 * main: print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
 * Return - Always return 0.
 */
void print_alphabet_x10(void)
{
char letters = 'a';
int count = 0;
while (count < 10)
{
while (letters <= 'z')
{
_putchar(letters);
letters++;
}
_putchar('\n');
letters = 'a';
count++;
}
}
