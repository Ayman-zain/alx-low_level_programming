#include "main.h"
/**
 *  read_textfile - function that reads a text file and prints it to stdout.
 * @filename: its the file name
 * @letters: number of letters to read.
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t s = 0;
int fd;
char c[1024 * 8];

if (!filename || !letters)
	return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
s = read(fd, &c[0], letters);
s = write(STDOUT_FILENO, &c[0], s);
close(fd);
return (s);
}
