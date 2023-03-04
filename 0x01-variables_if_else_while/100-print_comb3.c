#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to display combibation of two numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;

	while (i < 10)
	{
		while (j < 10)
		{
			putchar(i);
			putchar(j);
			if (i != 8 && j != 9)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}
