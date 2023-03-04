#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to print numbers 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 10;
	int i = 0;

	while (i < numbers)
		putchar(i);
	putchar(10);
	return (0);
}
