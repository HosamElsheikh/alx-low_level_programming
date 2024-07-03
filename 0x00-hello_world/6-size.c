#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always zero
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("\nSize of an int: %d byte(s)\n", sizeof(int));
	printf("\nSize of a long int: %d byte(s)\n", sizeof(long int));
	printf("\nSize of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("\nSize of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
