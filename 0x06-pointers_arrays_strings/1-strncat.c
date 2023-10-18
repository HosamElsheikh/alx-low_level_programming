/**
 * _strncat - adds s2 to s1 by n
 * @dest: The first string
 * @src: The string to concat
 * @n: The number of bytes
 *
 * Return: Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i;

	length = 0;
	while (dest[length] != '\0')
		length++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';


	return (dest);
}
