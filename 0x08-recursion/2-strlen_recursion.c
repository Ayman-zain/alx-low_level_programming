#include "main.h"

/**
 * _strlen_recursion -  function that prints a string, followed by a new line.
 * @s: string
 * Return: length.
 */
int _strlen_recursion(char *s)
	{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		n = n + _strlen_recursion(s + 1);
	}
	return (n);
	}
