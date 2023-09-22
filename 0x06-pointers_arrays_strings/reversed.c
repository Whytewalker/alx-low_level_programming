#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array to reverse
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
}
