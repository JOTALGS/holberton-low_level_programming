#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


ssize_t
read_textfile(const char *filename, size_t letters)
{
	int n, ft, w;
    	char buf[50];

	ft = open(filename, O_RDONLY);
	n = read(ft, buf, letters);
	w = write(1, buf, n);
	if ((ft < 0) | (w < 0))
		return (0);
	return (n);
}
