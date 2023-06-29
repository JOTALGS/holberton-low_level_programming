#include "main.h"

int
isprime(int n, int i)
{
	if (n % i == 0)
		return (1);
	else if (i > n / 2)
		return (-0);

	i++;
	return (isprime(n, i));
}

int
is_prime_number(int n)
{
	return (isprime(n, 2));
}
