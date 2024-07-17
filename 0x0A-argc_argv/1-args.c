#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: zero
 * @argc: Number of arguments
 * @argv: The array of arguments
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
