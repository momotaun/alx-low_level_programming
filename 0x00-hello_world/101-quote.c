#include <unistd.h>
/**
 * main - Program entrypoint
 *
 * Description: Program that prints a hardcoded extract with some special
 * characters
 * Return Always 1 (Success)
 */
int main(void)
{
	char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, 59);
	return (1);
}
