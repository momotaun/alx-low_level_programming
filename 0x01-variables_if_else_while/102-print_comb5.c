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
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
					{
						l++;
						continue;
					}
					putchar(44);
					putchar(32);
					l++;
				}
				k++;
				l = 48;
			}
			j++;
			k = 48;
			l = j + 1;
		}
		i++;
		j = 48;
		l = 49;
	}
	putchar(10);
	return (0);
}
