#include "main.h"

int
isprime(int n, int i)
{
	if (n == 1 || n < 0)
		return (0);
	else if (n % i == 0)
		return (0);
	else if (i > n / 2)
		return (1);

	i++;
	return (isprime(n, i));
}

int
is_prime_number(int n)
{
	return (isprime(n, 2));
}
