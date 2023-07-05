#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: the number to be checked.
 *
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check if the number is prime.
 * @n: the number to be checked.
 * @i: the iteration times.
 *
 * Return: 1 for prime or 0 composite.
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < 1)
		return (1);

	return (check_prime(n, i + 1));
}
