#include "main.h"

/**
 * _strlen - return the length of string
 * @c: the string
 * Return: the length
 */
int _strlen(char *c)
{
int n = 0;

if (!c)
	return (0);
while (*c++)
	n++;
return (n);
}

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int c = 0, l = _strlen(text_content);

if (!filename)
	return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
	return (-1);
if (l)
	c = write(fd, text_content, l);
close(fd);
if (l == c)
	return (1);
else
	return (-1);
}
