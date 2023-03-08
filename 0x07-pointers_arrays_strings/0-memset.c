#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte.
 *@s: pointor to memory area.
 *@b: byte that will fill n.
 *@n: return
 *Return: 
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
