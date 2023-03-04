#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to dispaly alphabets using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}

	putchar(10);
	return (0);
}
