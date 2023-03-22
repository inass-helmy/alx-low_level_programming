#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 *
*/
int main(void)
{
	long total, first, second, sum;

	sum = 0;
	total = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			total += sum;
		}
		first = second;
		second = sum;
	}

	printf("%li\n", total);

	return (0);
}
