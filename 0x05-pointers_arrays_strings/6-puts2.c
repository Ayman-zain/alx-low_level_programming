#include "main.h"

/**
 * puts2 - this is a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 */

void puts2(char *str)
{
int i = 0;
int j = 0;
int t;
char *s = str;

while (*s != '\0')
{
	i++;
	s++;
}
j = i - 1;
	for (t = 0 ; t <= j; t++)
	{
		if (t % 2 == 0)
	{
		_putchar(str[t]);
	}
	}
	_putchar('\n');

}
