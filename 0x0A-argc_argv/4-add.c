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
int sum = 0;

if (argc > 1)
	{
	int j;

	for (j = 1; j < argc; j++)
		{
		if ((*argv[j] <= 57) && (*argv[j] >= 48))
			{
			sum += atoi(argv[j]);
		}
		else
			{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
}
else
	{
	printf("0\n");
}
return (0);
}
