#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 *
*/
int main(void)
{
	long int first, second, sum;
	int count;
	char ch;
	char line;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;
	ch = 44;
	line = 10;

	while (count < 98)
	{
		sum = first + second;
		_putchar(sum + ch);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	_putchar(sum + line);

	return (0);
}
