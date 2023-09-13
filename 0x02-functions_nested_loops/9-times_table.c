#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0.
 */
void times_table(void)
{
    int i, j, k, l, m;

    for (i = 0; i < 10; i++)
    {
        _putchar('0');
        for (j = 1; j < 10; j++)
        {
            _putchar(',');
            _putchar(' ');
            k = i * j;
            l = k / 10;
            m = k % 10;
            if (k < 10)
            {
                _putchar(' ');
                _putchar(m + '0');
            }
            else
            {
                _putchar(l + '0');
                _putchar(m + '0');
            }
        }
        _putchar('\n');
    }
}