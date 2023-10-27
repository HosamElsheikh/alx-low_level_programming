/**
 * _strncpy - copies s2 to s1 by n
 * @dest: The first string
 * @src: The string to concat
 * @n: The number of bytes
 *
 * Return: Pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0; length < n && src[length] != '\0'; length++)
	{
		dest[length] = src[length];
	}
	for ( ; length < n; length++)
		dest[length] = '\0';
	return (dest);
}
