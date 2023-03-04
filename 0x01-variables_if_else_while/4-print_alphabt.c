#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to display lowercase aplhabets excluding e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (i == 4 || i == 16)
		{
			i++;
			continue;
		}
		putchar(alphabets[i]);
		i++;
	}
	putchar(10);
	return (0);
}
