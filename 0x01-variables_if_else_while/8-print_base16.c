#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);

	return (0);

}
