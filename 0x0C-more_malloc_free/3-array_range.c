#include <stdlib.h>
#include "main.h"
/**
 * *array_range - a function that allocates memory for an array, using malloc.
 * @min: starting number
 * @max: last number
 * Return: array
 */
int *array_range(int min, int max)
{
int *p;
int i, v;

if (max < min)
	return (NULL);
p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
	return (NULL);
v = min;
for (i = 0; v <= max; i++)
{
	p[i] = v++;
}
return (p);
}
