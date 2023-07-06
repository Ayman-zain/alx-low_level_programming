#include "main.h"

/**
 * _puts_recursion -  function that prints a string, followed by a new line.
 * @s: string
 *
 *
 */
int i = 0;
void _puts_recursion(char *s){
	if(s[i] == '\0'){
		_putchar('\n');
	}
	else{
		_putchar(s[i]);
		i++;
		_puts_recursion(s);
	}
	}
