#include <stdio.h>

/**
 * main - Program entrypoint
 *
 * Description: Program to display combibation of three numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
					{
						k++;
						continue;
					}
					putchar(44);
					putchar(32);
					k++;
				}
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar(10);
	return (0);
}
