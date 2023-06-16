#include <stdio.h>
/**
 * main - main function stuff
 * Return:0
 */
int main(void)
{
	char dgt;
	char newline = '\n';

	for (dgt = '0'; dgt <= '9'; dgt++)
	{
		putchar(dgt);
	}
	putchar(newline);
	return (0);
}

