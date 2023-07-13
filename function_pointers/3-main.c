#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int a;
	int b;
	int f;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
	{
                printf("Error: \n");
                exit(99);
        }
	if ((*argv[2] == '/' && *argv[3] == '0') || (*argv[2] == '%' &&  *argv[3] == '0'))
	{
                printf("Error\n");
                exit(100);
        }
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ptr = (*get_op_func(argv[2]));
	f = ptr(a, b);
	printf("%d\n", f);
	return (0);
}

