#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - main func
 * @n: int val
 * Return:last dig
 */
int print_last_digit(int n)
{
	int n_1;

	n_1 = abs(n % 10);
	_putchar('0' + n_1);
	return (n_1);
}
