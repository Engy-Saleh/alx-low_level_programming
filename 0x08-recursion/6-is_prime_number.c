#include "main.h"

int check_prime(int n, int othr);
int is_prime_number(int n);

/**
  * is_prime_number - Returns if a number is prime
  *
  * @n: the number to be checked
  *
  * Return: integer value
  */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - Check if number is prime
  *
  * @n: the number to be checked
  * @othrn: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */

int check_prime(int n, int othrn)
{
	if (n <= 1)
		return (0);

	if (n % othrn == 0 && othrn > 1)
		return (0);

	if ((n / othrn) < othrn)
		return (1);

	return (check_prime(n, othrn + 1));
}
