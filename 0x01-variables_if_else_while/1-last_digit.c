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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("The last digit of %d is ", n);
	if (m > 5)
		printf("%d and is greater than 5", m);
	else if (m == 0)
		printf("and is 0");
	else
		printf("%d and is less than 6 and not 0", m);
	return (0);
}
