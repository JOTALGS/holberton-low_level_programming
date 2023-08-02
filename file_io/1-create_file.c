#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

int
create_file(const char *filename, char *text_content)
{
	int fd1, w;
	int len = strlen(text_content);

	if (!filename | !text_content)
		return (-1);
	fd1 = open(filename, O_CREAT|O_WRONLY, 600);
	w = write(fd1, text_content, len);
	if ((fd1 < 0) | (w < 0))
		return (-1);
	close(fd1);
	return (1);
}
