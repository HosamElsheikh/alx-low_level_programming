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
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
