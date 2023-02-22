#include "main.h"

/**
 * int _isalpha - check for any letters
 * @c: the character
 * Return:0 or 1
 */

int _isalpha(int c)
{

if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	return(0);
else
	return(1);
}
