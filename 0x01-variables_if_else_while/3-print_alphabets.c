#include <stdio.h>

/**
 * main: entry point
 *
 * description: print the letters of the alphabet in lowercase then uppercase in one line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;

	m = 97;
	n = 65;

	while (m < 123)
	{
		putchar(m);
		m++;
	}

	while (n < 91)
	{
		putchar(n);
		n++;
	}

	putchar(10);

	return (0);
}
