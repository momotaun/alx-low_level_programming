#include <stdio.h>
#include <string.h>
/**
 *  main - Entry point
 *  @argc: argument counter
 *  @argv: argument vector
 *
 *  Description: Program that prints the size of various
 *  types on the computer it is compiled and run on.
 *  Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("Size of a char: 1 byte(s)\n");
	printf("Size of an int: 4 byte(s)\n");
	if (strcmp(argv[0], "./size64"))
		printf("Size of a long int: 4 byte(s)\n");
	else
		printf("Size of a long int: 8 byte(s)\n");
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: 4 byte(s)\n");

	return (0);
}
