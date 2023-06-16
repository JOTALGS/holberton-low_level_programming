#include <stdio.h>
/**
 * main - main funcr
 * Return:0
 */
int main(void)
{
	char count;
	char newline = '\n';

	for (count = 0; count <= 15; count++)
	{
		if (count < 10)
		{
			putchar('0' + count);
		}
		else
		{
			putchar('a' + (count-10));
		}
	}
	putchar(newline);
	return (0);
}	
