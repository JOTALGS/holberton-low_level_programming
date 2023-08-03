#include "main.h"
#include <stdio.h>

void
copy_file(const char *from, const char *to)
{
	int fd, fd1, w, c, r;
	char *buf[1024];

	fd = open(from, O_RDONLY);
	
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	r = read(fd, buf, 1024);
	fd1 = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0662);
	
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	else if (r > 0)
		w = write(fd1, buf, 1024);
	
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	c = close(fd1);
	
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
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
