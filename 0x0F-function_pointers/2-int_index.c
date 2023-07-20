#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @size: size of the array.
 * @cmp: a pointer to the fanction that search.
 * @array: an array
 * Return: index of the first element for which the cmp doesn't return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, h = 0;

if (array == NULL || cmp == NULL)
	return (-1);
if (size <= 0)
	return (-1);
for (i = 0; i < (int)size; i++)
{
	h = cmp(array[i]);
	if (h != 0)
		return (i);
}
	return (-1);
}
