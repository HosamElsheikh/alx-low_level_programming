#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 65; j < 71; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
