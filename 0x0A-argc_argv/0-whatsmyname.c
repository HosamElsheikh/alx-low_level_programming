#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
