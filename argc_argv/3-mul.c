#include <stdio.h>

int
main(int argc, char **argv)
{
	int ml;
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = *argv[1] - '0';
	b = *argv[2] - '0';
	ml = a * b;
	printf("%d\n", ml);
	return (0);
}
