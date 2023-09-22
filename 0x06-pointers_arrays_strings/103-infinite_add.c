#include "main.h"
#include <stdlib.h>


/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of the buffer
 * Return: the result of the addition, or 0 if the result cannot be stored
 * in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, n, len1, len2, carryover;
	char *tmp;
	int *int_r;

	int_r = malloc(sizeof(int) * size_r);
	if (int_r == NULL)
		return (0);

	for (len1 = 0; *(n1 + len1); len1++)
		;
	for (len2 = 0; *(n2 + len2); len2++)
		;
	if (len1 > size_r || len2 > size_r)
		return (0);
	carryover = 0;
	for (i = len1 - 1, j = len2 - 1, n = 0; i >= 0 || j >= 0; i--, j--, n++)
	{
		if (i >= 0)
			carryover += *(n1 + i) - '0';
		if (j >= 0)
			carryover += *(n2 + j) - '0';
		*(r + n) = (carryover % 10) + '0';
		carryover /= 10;
	}
	if (carryover)
	{
		*(int_r + n) = carryover + '0';
		n++;
	}
	reverse_array(int_r, n);
	for (i = 0; i < n; i++)
	{
		*(r + i) = int_r[i] + '0';
	}
	*(r + i) = '\0';
	tmp = r;
	for (i = 0; i < n; i++, j++)
		;
	if (i)
	{
		for (j = 0; i < n; i++, j++)
			*(tmp + j) = *(r + i);
		*(tmp + j) = '\0';
	}
	free (int_r);
	return (tmp);
}
