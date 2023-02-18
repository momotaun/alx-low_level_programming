#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to dispaly alphabets using putchar
 * Rerturn: Always 0 (Success)
 */
int main (void)
{
	char alphabet;

	alphabet = "a";
	while (alphabet <= "z")
		putchar("%d", alphabet);
		alphabet++;

	putchar("\n")
	return (0);
}
