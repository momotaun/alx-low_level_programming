#include <unistd.h>
/**
 * main - Program entrypoint
 *
 * Description: Program that prints a hardcoded extract with some special 
 * characters
 * Return 1
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2, mesasge, 59);
	return(1);
}
