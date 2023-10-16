/**
 * swap_int - swaps between two integers
 * @a: The first int
 * @b: The second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
