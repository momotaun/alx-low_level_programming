#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to display 0 to 9 separated by comma
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i == 57)
			putchar(44);
		i++;
	}
	return (0);
}
