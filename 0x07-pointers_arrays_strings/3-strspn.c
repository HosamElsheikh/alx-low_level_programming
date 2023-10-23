/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i;
	int q;
	unsigned int ret;

	q = 0;
	ret = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ret++;
				q++;
			}
		}
		if (q == 0)
		{
			break;
		}
		q = 0;
	}
	return (ret);
}
