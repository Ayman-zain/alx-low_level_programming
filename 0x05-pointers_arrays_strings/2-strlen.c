#include "main.h"

/**
 * _strlen - this is a function that returns the length of a string.
 * @s: string.
 * Return: integer i;
 */

int _strlen(char *s)
{
int i= 0;

while (*s != '\0')
{
	i++;
	s++;
}
return (i);
}
