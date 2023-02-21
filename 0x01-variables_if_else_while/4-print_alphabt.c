#include<stdio.h>

/**
 * main - print lowercase followed by appercase
 * Return: Always 0 (success)
 */

int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q' )
	putchar(ch);
}
putchar('\n');
return (0);
}
