#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to display lowercase alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
