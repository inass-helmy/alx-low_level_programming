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
	char ch

	sum = 0;
	first = 0;
	second = 1;
	count = 0;
	ch = 0x2C

	while (count < 98)
	{
		sum = first + second;
		_putchar(sum + ch);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	_putchar(sum + "\n");

	return (0);
}
