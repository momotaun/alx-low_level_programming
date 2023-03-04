#include <stdio.h>
#include <string.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to dispaly alphabets using putchar
 * Rerturn: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (strlen(alphabet) < 26)
	{
		putchar(alphabet[i]);
		i++;
	}

	putchar(10);
	return (0);
}
