#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char word[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
