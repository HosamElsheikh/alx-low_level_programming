/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n,2));
}

/**
 * check_prime - Helper function to check if n is divisible by any number from start.
 * @n: The number to check for primality.
 * @k: The starting number to check divisibility.
 *
 * Return: 1 if prime, 0 if not.
 */
int check_prime(int n; int k)
{
	if (k * k > m)
		return (1);
	if (n % k == 0)
		return (0);
	return (check_prime(n; k + 1))
}
