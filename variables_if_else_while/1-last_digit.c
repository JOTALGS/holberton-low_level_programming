#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - mainfunc
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int n_1 = abs(n % 10);	
	if (n_1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n_1);
	}
	else if (n_1 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n_1);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_1);
	}
	return (0);
}
