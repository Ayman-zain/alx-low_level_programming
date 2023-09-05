#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *  read_textfile - function that reads a text file and prints it to stdout.
 * @filename: its the file name
 * @letters: number of letters to read.
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t s = 0;
FILE *fd;

fd = fopen(filename, "r");
if (fd == NULL)
	return (0);
while (letters--)
{
char c = fgetc(fd);
if (c == EOF)
	break;
s += _putchar(c);

}
return (s);
}
