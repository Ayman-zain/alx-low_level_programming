#include "main.h"

/**
 * _isalpha - check for any letters
 * @c: the character we need to check
 * Return: 0 or 1
 */

int _isalpha(int c)
{

if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	return(1);
else
	return(0);
}
