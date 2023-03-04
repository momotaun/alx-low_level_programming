#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to display lowercase aplhabets excluding e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwqyz";
	int i = 0;

	while (i < 26)
	{
		if (i == 4 || i ==23)
		{
			continue;
		}
		putchar(alphabets[i]);
		i++;
	}
	putchar(10);
	return (0);
}
