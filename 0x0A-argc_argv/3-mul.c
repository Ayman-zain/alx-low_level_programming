#include <stdio.h>
#include <stdlib.h>
/**
 * main - print th program's name
 * @argc: number of arguments to main.
 * @argv: an array of strings that include args to main.
 * Return: 0 if everything worked fine
 */

int main(int argc, char **argv)
{
int i;

if (argc == 3)
	{
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
