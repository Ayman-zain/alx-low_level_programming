#include "main.h"

/**
 * print_rev - this is a function that reverse a string.
 * @s: string.
 */

void print_rev(char *s)
{

int i = 0;
char rev = s[0];
int j;
while (*s != '\0')
{
i++;
s++;
}

for (j = 0; j < i; j++)
{
	j--;
	rev = s[j];
	s[j] = s[i];
	s[i] = rev;
}

}
