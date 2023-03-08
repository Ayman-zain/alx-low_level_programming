#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int space = 0;

	for (; s[space] >= '\0'; space++)
	{
		if (s[space] == c)
			return (&s[space]);
	}
	return (0);
}

