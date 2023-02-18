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
	printf("The last digit of %d is ", n);
	if (n % 10 > 5)
		printf("and is greater than 5");
	else if (n % 10 == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	return (0);
}
