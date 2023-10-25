/**
 * _pow_recursion - Calculate x raised to the power of y using recursion
 * @x: The base
 * @y: The exponent
 *
 * Return: x to the power of y, or -1 if y is negative (error).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
