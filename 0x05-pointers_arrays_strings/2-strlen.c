#include "main.h"

/**
 * _strlen - this is a function that returns the length of a string.
 * @s: string.
 * Return: integer i;
 */

int _strlen(char *s)
{
int i;
char arr[] = *s;

for (i = 0; i != '\0'; i++)
	i++;
return (i);
}
