#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
    int i, j, k, l, m;

    if (n >= 0 && n <= 15)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                k = i * j;
                l = k / 100;
                m = (k / 10) % 10;
                if (j == 0)
                {
                    _putchar('0');
                }
                else if (k < 10)
                {
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(k + '0');
                }
                else if (k >= 10 && k < 100)
                {
                    _putchar(' ');
                    _putchar(m + '0');
                    _putchar(k % 10 + '0');
                }
                else
                {
                    _putchar(l + '0');
                    _putchar(m + '0');
                    _putchar(k % 10 + '0');
                }
                if (j != n)
                {
                    _putchar(',');
                    _putchar(' ');
                }
            }
            _putchar('\n');
        }
    }
}