#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible different
 * combinations of three digits.
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i, j, k;

	i = 48;
	j = 48;
	k = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 56 || j < 57 || k < 57)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}

			j++;
		}

		i++;

	}
	putchar(10);

	return (0);

}
