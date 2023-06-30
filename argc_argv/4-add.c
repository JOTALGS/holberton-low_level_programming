#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char **argv)
{
	int sm = 0;
	char str[20];
	int i;
	int y;

	for (i = 0; i < argc; i++)
	{
		strcpy(str, argv[i]);
		for (y = 0; y != '\0'; y++)
		{
			if ('0' <= str[y] && str[y] <= '9')
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sm = sm + atoi(argv[i]);
	}
	printf("%d\n", sm);
	return (0);
}
