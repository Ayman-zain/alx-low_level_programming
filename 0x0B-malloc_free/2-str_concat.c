#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string;
 * Return: a string that is s1+s2.
 *
 */

char *str_concat(char *s1, char *s2)
{
char *s3;
int i, j;
int c = strlen(s1) + strlen(s2);

s3 = malloc(sizeof(char) * c);
if (s3 == NULL)
	return (NULL);
i = 0;
j = 0;
while (s1[i] != '\0')
{
	s3[j] = s1[i];
	i++;
	j++;
}
i = 0;
while (s2[i] != '\0')
{
	s3[j] = s2[i];
	i++;
	j++;
}
return (s3);
}
