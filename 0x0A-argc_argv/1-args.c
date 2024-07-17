#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: zero
 * @argc: Number of arguments
 * @argv: The array of arguments
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
