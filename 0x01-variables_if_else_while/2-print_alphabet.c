#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to dispaly alphabets using putchar
 * Rerturn: Always 0 (Success)
 */
int main (void)
{
	char alphabet[26]= "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabet < 26)
		putchar(alphabet);
		i++;

	putchar("\n")
	return (0);
}
