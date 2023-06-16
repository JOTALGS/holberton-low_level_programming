#include "main.h"
/**
 * print_alphabet - check the nest
 */
void print_alphabet_x10(void)
{
	char alph;
	int ct;

	for (ct = 0; ct <= 9; ct++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
