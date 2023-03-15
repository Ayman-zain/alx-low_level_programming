#include "main.h"
/**
 * _strchr - Entry point
 * @s: string to be searched at.
 * @c: desired character.
 * Return: int 0.
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

