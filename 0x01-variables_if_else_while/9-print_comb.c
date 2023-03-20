#include <stdio.h>
 
/**
 * main - Entry point
 *
 * Description: a program that prints all possible combinations of
 * single-digit numbers
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i = 0;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);

	return (0);

}
