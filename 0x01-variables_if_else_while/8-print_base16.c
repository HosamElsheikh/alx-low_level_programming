#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always zero
 */
int main(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
