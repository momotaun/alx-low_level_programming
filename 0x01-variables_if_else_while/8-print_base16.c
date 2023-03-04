#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to print all hexadecimal chars in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 97;

	while (j < 103)
	{
		while (i < 58)
		{
			putchar(i);
			i++;
		}
		putchar(j);
		j++;
	}
	return (0);
}
