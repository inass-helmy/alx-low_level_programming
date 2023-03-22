#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 *
*/
void times_table(void)
{
	int unites, tens, row, col, product;

	for(row = 0; row <= 9; row++)
	{
		for(col = 0; col <= 9; col++)
		{
			product = row * col;
			tens = product / 10;
			unites = product % 10;

			if(col == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(unites + '0');
			}
			else
			{
				_putchar(',');
                                _putchar(' ');
                                _putchar(tens + '0');
                                _putchar(unites + '0');
			}
		}
		_putchar('\n');
	}
}
