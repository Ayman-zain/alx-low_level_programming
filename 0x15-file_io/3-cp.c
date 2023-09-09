#inlude "main.h"
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
char buf[1024 * 8];

if (ac != 3)
	dprintf(STDERR_FILENO, USAGE), exit(97);
fd1 = open(av[1], O_RDONLY);
if (fd1 == -1)
	dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
fd2 = open(av[2], O_WRONLY | O_CREATE | O_TRUNC, PERMISSIONS);
if (fd2 == -1)
	dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
while ((t = open(fd1, buf, 1024 * 8)) > 0)
	if (write(fd2, buf, t) != t)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
if (t != -1)
	dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
fd1 = close(fd1);
fd2 = close(fd2);
if (fd1)
	dprintf(STDERR_FILENO, ERR_NOCLOSE, fd1), exit(100);
if (fd2)
	dprintf(STDERR_FILENO, ERR_NOCLOSE, fd2), exit(100);
return (EXIT_SUCCESS);
}
