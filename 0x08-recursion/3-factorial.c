/**
 * factorial - Calculate the factorial of a number
 * @n: The number for which to calculate the factorial
 *
 * Return: The factorial of n, or -1 if n is negative (error).
 */
int factorial(int n)
{
	int fac;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		fac = n * factorial(n - 1);
		return (fac);
	}
}
