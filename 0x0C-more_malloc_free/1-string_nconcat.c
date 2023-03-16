#include "main.h"

/**
 **string_nconcat - a function that concatenates two strings.
 *@s1: first string.
 *@s2: second string.
 *@n: number of byte of s2 that gonna be concatenated.
 *Return: pointer.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;

	unsigned int i = 0, j = 0, i1 = 0, i2 = 0;


	while (s1 && s1[i1])
		i1++;

	while (s2 && s2[i2])
		i2++;

	if (n < i2)
		s = malloc(sizeof(char) * (i1 + n + 1));
	else
		s = malloc(sizeof(char) * (i1 + i2 + 1));

	if (!s)
		return (NULL);

	while (i < i1)
		{
		s[i] = s1[i];
		i++;
	}

	while (n < i2 && i < (i1 + n))
		s[i++] = s2[j++];

	while (n >= i2 && i < (i1 + i2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);

}
