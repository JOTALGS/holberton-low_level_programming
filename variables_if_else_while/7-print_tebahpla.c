#include <stdio.h>
/**
 * main - main function stuff
 * Return:0
 */
int main(void)
{
	char abc;
	char newline = '\n';

	for (abc = 'z'; abc >= 'a'; abc--)
	{
		putchar(abc);
	}
	putchar(newline);
	return (0);
}

