#include "main.h"
#include <stdio.h>

void
copy_file(const char *from, const char *to)
{
	int fd, fd1, w;
	char *buf[1024];

	fd = open(from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", from);
		exit(98);
	}
	read(fd, buf, 1024);
	fd1 = open (to, O_WRONLY | O_CREAT | O_TRUNC, 0662);
	w = write(fd1, buf, 1024);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit (99);
	}
	close(fd1);
}
int
main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}
