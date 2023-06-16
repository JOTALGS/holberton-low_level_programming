#include <stdio.h>
/** main - main function stuff
 * Return:0
 */
int main (void)
{
	char abc;
	char newline = '\n';

	for (abc = 'a';abc <= 'z';abc++)
	{
		putchar(abc);
	}
	putchar(newline);
	return (0);
}

