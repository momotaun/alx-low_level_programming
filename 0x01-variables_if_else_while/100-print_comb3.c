#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to display combibation of two numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				j++;
				continue;
			}
			putchar(44);
			putchar(32);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}
