#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to old space
 * @old_size: old size
 * @new_size: new size
 * Return: void otr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *temp;
char *p;
unsigned int i;

if (new_size == old_size)
{
	return (ptr);
} else if (ptr == NULL)
{
	ptr = malloc(new_size);
} else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
p = malloc(new_size);
if (p == NULL)
	return (NULL);
temp = ptr;
if (new_size < old_size)
{
	for (i = 0; i < new_size; i++)
		p[i] = temp[i];
}
if (new_size > old_size)
{
	for (i = 0; i < old_size; i++)
		p[i] = temp[i];
}
free(ptr);
return (p);
}
