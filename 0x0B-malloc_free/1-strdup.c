#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory;
 * @str: the string.
 * Return: a ptr to the allocated space.
 */

char *_strdup(char *str)
{
char *s;
int i;

if (str == NULL)
	return (NULL);
s = malloc(sizeof(char) * (strlen(str) + 1));
if (s == NULL)
	return (NULL);
for (i = 0; i < (int)strlen(str); i++)
	s[i] = str[i];
return (s);
}
