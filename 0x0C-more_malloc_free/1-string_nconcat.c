#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string;
 * @n: len needed from s2
 * Return: a string that is s1+s2.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
int i, j;
int c = strlen(s1) + strlen(s2) + 1;

s3 = malloc(sizeof(char) * c);
if (s3 == NULL)
	return (NULL);
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
i = 0;
j = 0;
while (s1[i] != '\0')
	{
	s3[j] = s1[i];
	i++;
	j++;
	}
if (n >= strlen(s2))
{
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
} else
{
i = 0;
while (n--)
	{
	s3[j] = s2[i];
	i++;
	j++;
	}
}
return (s3);
}
