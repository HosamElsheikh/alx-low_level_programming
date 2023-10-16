/**
 * _strlen - returns the length of a string
 * @s: the character
 *
 * Return: int the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
