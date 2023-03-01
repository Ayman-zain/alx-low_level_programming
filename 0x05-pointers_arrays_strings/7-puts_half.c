#include "main.h"

/**
 * puts_half - this is a function that prints half of a string
 * , followed by a new line.
 * @str: string
 */

void puts_half(char *str)
{
int i, j, h;

	h = 0;

	for (i = 0; str[i] != '\0'; i++)
		h++;

	j = (h / 2);

	if ((h % 2) == 1)
		j = ((h + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
