#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Proram to assign a random number and display it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
