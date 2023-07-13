#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array;
 * @c: the char
 * Return: the string
 */
char *create_array(unsigned int size, char c)
{

char *s;
int i;

s = malloc(sizeof(char) * size);
if ((s == NULL) || (size == 0))
	return (NULL);
for (i = 0; i < (int)size; i++)
	s[i] = c;
return (s);
}
