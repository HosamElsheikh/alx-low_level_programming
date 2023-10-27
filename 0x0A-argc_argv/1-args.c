#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the number of arguments passed into the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
