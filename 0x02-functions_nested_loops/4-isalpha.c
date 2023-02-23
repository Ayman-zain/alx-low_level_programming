#include "main.h"

/**
 * _isalpha - check for any letters
 * @c: the character we need to check
 * Return: 1 for any alphabet and 0 for any thing else
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
	return(1);
}
return(0);
}
