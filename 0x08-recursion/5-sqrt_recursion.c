/**
 * _sqrt_helper - Helper function for _sqrt_recursion
 * @n: The number for which to calculate the square root
 * @guess: The current guess for the square root
 *
 * Return: The natural square root if found, -1 if not found.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return guess;
	else if (guess * guess > n)
		return -1;
	return _sqrt_helper(n, guess + 1);
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number using recursion
 * @n: The number for which to calculate the square root
 *
 * Return: The natural square root if found, -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	return _sqrt_helper(n, 0);
}
