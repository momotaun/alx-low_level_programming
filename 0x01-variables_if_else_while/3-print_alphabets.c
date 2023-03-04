#include <stdio.h>

/**
 * main - Program enty point
 *
 * Description: Program to display all alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar(10);
	return (0);
}
