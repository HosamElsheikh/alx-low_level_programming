/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string to find the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (count);
	return (1 + _strlen_recursion(s + 1));
}
