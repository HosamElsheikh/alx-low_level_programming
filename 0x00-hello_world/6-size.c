#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch;
        int i;
        long l;
        long long int li;
        float f;
        printf("The size of a char: %d byte(s)\n", sizeof(ch));
        printf("The size of an int: %d byte(s)\n", sizeof(i));
        printf("The size of a long: %d byte(s)\n", sizeof(l));
        printf("The size of a long long int: %d byte(s)\n", sizeof(li));
        printf("The size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
