#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
	int ml;
	long int a;
	long int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ml = a * b;
	printf("%d\n", ml);
	return (0);
}
