#include "main.h"
#include <stdio.h>

int check_prime(int n, int x);

/**
 * is_prime_number -  returns 1 if int is prie or 0 if not
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - checks if no is prime
 * @n: int
 * @x: iteration
 * Return: 1 if prime or 0 if not
 */
int check_prime(int n, int x)
{
	if (n <= 1)
		return (0);

	if (n % x == 0 && x > 1)
		return (0);

	if ((n / x) < x)
		return (1);

	return (check_prime(n, x + 1));
}
