#include <stdio.h>
#include "main.h"
/**
 * main - print _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
char message[] = "_putchar\n";
int SizeOfSTRING = sizeof message;
int count;

for (count = 0; count < SizeOfSTRING; count++)
{
char i = message[count];
_putchar(i);
}
return (0);
}
