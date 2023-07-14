#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string;
 * @n: len needed from s2
 * Return: a string that is s1+s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
int i, j;
int c = _strlen(s1) + _strlen(s2) + 2;
int c2 = _strlen(s1) + n + 1;
if ((int)n >= _strlen(s2) + 1)
	s3 = malloc(sizeof(char) * c);
else
	s3 = malloc(sizeof(char) * c2);
if (s3 == NULL)
	return (NULL);
i = 0, j = 0;
while (s1[i] != '\0')
	s3[j++] = s1[i++];
if ((int)n >= _strlen(s2))
{
	while (s2[i] != '\0')
		s3[j++] = s2[i++];
} else
{
i = 0;
while (n--)
	s3[j++] = s2[i++];
}
return (s3);
}
/**
 * _strlen - this is a function that returns the length of a string.
 * @s: string.
 * Return: integer i;
 */
int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
	i++, s++;
return (i);
}
