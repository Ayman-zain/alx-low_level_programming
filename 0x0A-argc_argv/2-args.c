#include <stdio.h>

/**
 * main - print th program's name
 * @argc: number of arguments to main.
 * @argv: an array of strings that include args to main.
 * Return: 0 if everything worked fine
 */

int main(int argc, char __attribute__((__unused__)) **argv)
{
int i;

for (i = 1; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
