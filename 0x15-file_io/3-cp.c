#include "main.h"
#define READ_SIZE 1024
/**
 * main - main fn of cp
 * @ac: the number of args
 * @av: array og args
 * Return: int
 */
int main(int ac, char **av)
{
int fd1 = 0, fd2 = 0;
ssize_t t = 0;
char buf[READ_SIZE];

if (ac != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd1 = open(av[1], O_RDONLY);
if (fd1 == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd2 == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
while ((t = read(fd1, buf, READ_SIZE)) > 0)
	if (write(fd2, buf, t) != t)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
if (t != -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
fd1 = close(fd1);
fd2 = close(fd2);
if (fd1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
if (fd2)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
return (EXIT_SUCCESS);
}
