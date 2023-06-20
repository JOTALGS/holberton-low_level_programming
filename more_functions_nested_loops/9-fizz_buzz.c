#include <stdio.h>

/**
 *
 * Return:0
 */
int main(void)
{
	int ct;

	for (ct = 1; ct <= 100; ct++)
	{
		if ((ct % 3 == 0) && (ct % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (ct % 3 == 0)
		{
			printf("Fizz");
		}
		else if (ct % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", ct);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
