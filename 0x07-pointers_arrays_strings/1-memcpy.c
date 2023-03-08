#include "main.h"

/**
 **_memcpy - a function that copies memory area.
 *@dest: memory area copied to.
 *@src: memory area copied from.
 *@n: how much to be copied.
 *Return: dest.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
long h = n;

	for (; i < h; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
