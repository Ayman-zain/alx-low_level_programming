#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elemnets
 * @size: number of bytes
 * Return: void ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if ((nmemb == 0) || (size == 0))
	return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
	return (NULL);
for (i = 0; i < nmemb * size; i++)
	p[i] = '0';
return (p);
}
