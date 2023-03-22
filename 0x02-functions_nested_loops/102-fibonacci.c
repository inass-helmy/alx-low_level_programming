#include <stdio.h>

/**
 * main - list all the natural numbers below 10
 *
 * Return: Always 0
 *
*/
int main(void)
{
	int num, sum;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			num += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
