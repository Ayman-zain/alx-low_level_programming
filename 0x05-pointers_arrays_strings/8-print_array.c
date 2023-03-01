#include <stdio.h>

/**
 * print_array - this is a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array.
 * @n: number of elements to be printed.
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i <= n; i++)
{
	printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
