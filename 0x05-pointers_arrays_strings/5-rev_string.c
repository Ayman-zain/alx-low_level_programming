#include "main.h"

/**
 * rev_string - this is a function that reverse a string.
 * @s: string.
 */

void rev_string(char *s)
{

int i = 0;
char rev = s[0];
int j;

while (s[i] != '\0')
	i++;
for (j = 0; j < i; j++)
{
	j--;
	rev = s[j];
	s[j] = s[i];
	s[i] = rev;
}

}
