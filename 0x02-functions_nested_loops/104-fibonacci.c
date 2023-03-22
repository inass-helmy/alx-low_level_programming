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

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 98)
	{
		sum = first + second;
		_putchar("%li, " +  sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	_putchar("%li\n" + sum);

	return (0);
}
