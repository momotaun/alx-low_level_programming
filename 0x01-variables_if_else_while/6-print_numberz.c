#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to display 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
