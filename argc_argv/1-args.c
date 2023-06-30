#include <stdio.h>

int
main(int argc, char **argv)
{
	char *i = argv[0];

	if (i != 0)
	{
		printf("%d\n", argc);
		return (0);
	}
	return (0);
}
